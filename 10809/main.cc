#include <cstdio>
#include <cstring>

#define ALPHABET 26

int main()
{
	char *word = new char[101];
	int *alpha_info = new int[ALPHABET];
	char *base_addr = word;

	for(int i=0; i<ALPHABET; i++)
	{
		*(alpha_info+i) = -1;
	}

	scanf("%s", word);

	while(*word != '\0')
	{
		int index = word - base_addr;
		int offset = *word - 'a';

		if(alpha_info[offset] == -1)
		{
			alpha_info[offset] = index;
		}

		word++;
	}

	for(int i=0; i<ALPHABET; i++)
		printf("%d ", alpha_info[i]);

	printf("\n");

	return 0;
}
