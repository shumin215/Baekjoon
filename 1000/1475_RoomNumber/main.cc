#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

int main()
{
	int array[10];
	string str;

	cin >> str;

	for(int i=0; i<10; i++)
	{
		array[i] = 0;
	}

	for(int idx=0; idx<str.size(); idx++)
	{
		int i;
		char c = str.at(idx);
		i = c - '0';
		array[i]++;
	}

	array[6] = ((array[6] + array[9])/2) + ((array[6]+array[9])%2);

	int result=0;

	for(int i=0; i<9; i++)
	{
		if(result < array[i])
			result = array[i];
	}

	cout << result << endl;
	
	return 0;
}
