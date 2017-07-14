#include <cstdio>
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
	int count = 0;
	int count_table[26] = {0};
	char *str = new char[1000001];

	scanf("%s", str);

	string word = string(str);

	transform(word.begin(), word.end(), word.begin(), ::tolower);

	for(int i=0; i<word.size(); i++)
	{
//		cout << word.at(i);
		int index = word.at(i) - 'a';
		count_table[index] += 1;
	}

	int bigest = 0, bigest_index = 0;

	for(int i=0; i<26; i++)
	{
		if(bigest < count_table[i])
		{
			bigest = count_table[i];
			bigest_index = i;
		}
	}
	sort(count_table, count_table+26, greater<int>());

	if(count_table[0] == count_table[1])
	{
		printf("?\n");
		return 0;
	}

	printf("%c\n", 'A'+bigest_index);

	return 0;
}
