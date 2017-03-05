#include <cstdio>

int main()
{
	char *str = new char[100];

	while((*str = getchar()) != EOF)
	{
//		gets(str);
//		scanf("%s", str);
		printf("%s", str);
	}

	return 0;
}
