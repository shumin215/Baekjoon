#include <iostream>
#include <string>
using namespace std;

int main()
{
	string str;
	string croa_char[8] = {"c=","c-","dz=","d-","lj","nj","s=","z="};
	string swapStr;
	string temp = "*";
	int pos = 0;
	cin >> str;

	for(int i=0; i<8; i++)
	{
		swapStr = croa_char[i];
		
		if(str.find(swapStr) != string::npos)
		{
			while((pos = str.find(swapStr)) != string::npos)
			{
				cout << str << "-->";
				str.erase(pos, swapStr.length());
				str.insert(pos, temp);
				cout << str << endl;
			}
		}
	}

	cout << str.size() << endl;

	return 0;
}
