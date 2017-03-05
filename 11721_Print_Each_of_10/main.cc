#include <cstdio>

int main()
{
	int cnt = 0;
	char str[101];
	scanf("%s", str);

	while(*(str+cnt) != NULL)
	{
		printf("%c", *(str+cnt));
		cnt++;

		if(cnt % 10 == 0)
		{
			printf("\n");
		}
	}

	if(cnt % 10 != 0)
		printf("\n");

	return 0;
}
