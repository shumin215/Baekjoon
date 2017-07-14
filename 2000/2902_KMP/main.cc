#include <iostream>
#include <string>

using namespace std;

int main()
{
	bool flag = true;
	string str;
	cin >> str;

	auto iter = str.begin();

	while(*(iter) != '\0')
	{
		if(flag == true)
		{
			cout << *iter;
			flag = false;
		}

		if(*iter == '-')
		{
			flag = true;
		}
		iter++;
	}

	cout << endl;

	return 0;
}
