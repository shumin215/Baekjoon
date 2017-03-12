#include <cstdio>
#include <vector>
#include <cstring>

#define TABLE_SIZE 26


void tableInit(bool *table)
{
	for(int i=0; i<TABLE_SIZE; i++)
	{
		table[i] = false;
	}
}

int main()
{
	int num, count = 0;
	bool isGroupWord = true;
	bool table[TABLE_SIZE] = {false};
	char **str;
	scanf(" %d", &num);

	str = new char*[num];

	for(int i=0; i<num; i++)
	{
		tableInit(table);
		isGroupWord = true;

		str[i] = new char[101];
		scanf("%s", str[i]);

		int prev_idx = 0, idx = 0;

		for(int j=0; j<strlen(str[i]); j++)
		{
			prev_idx = idx;
			idx = *(str[i]+j) - 'a';

			/* already alphabet is counted */
			if(prev_idx != idx && j != 0 && table[idx] == true)
			{
				isGroupWord = false;
			}

			table[idx] = true;
		}

		if(isGroupWord)
			count++;
	}

	printf("%d\n", count);


	return 0;
}
