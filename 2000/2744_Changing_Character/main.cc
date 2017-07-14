#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
	string str;
	cin >> str;

	auto iter = str.begin();
	while(iter != str.end())
	{
		char ch = *iter;
		if(ch >= 97 && ch <= 122)
		{
			printf("%c",ch-32);
		}
		else
		{
			printf("%c",ch+32);
		}

		iter++;
	}
	cout << endl;
}
