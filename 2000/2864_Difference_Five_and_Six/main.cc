#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

int main()
{
	string str1, str2;
	string max_str1, max_str2, min_str1, min_str2;

	cin >> str1 >> str2;

	max_str1 = str1;
	max_str2 = str2;
	min_str1 = str1;
	min_str2 = str2;

	int str1_size = str1.size();
	int str2_size = str2.size();

	for(int i=0; i<str1_size; i++)
	{
		if(str1.at(i) == '5')
		{
			max_str1[i] = '6';
		}
		else if(str1.at(i) == '6')
		{
			min_str1[i] = '5';
		}
	}

	for(int i=0; i<str2_size; i++)
	{
		if(str2[i] == '5')
		{
			max_str2[i] = '6';
		}
		else if(str2[i] == '6')
		{
			min_str2[i] = '5';
		}
	}

	int max_num = atoi(max_str1.c_str()) + atoi(max_str2.c_str());
	int min_num = atoi(min_str1.c_str()) + atoi(min_str2.c_str());

	cout << min_num << " " << max_num << endl;

	return 0;
}
