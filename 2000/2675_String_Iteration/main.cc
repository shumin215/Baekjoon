#include <cstdio>
#include <cstring>
#include <cstdlib>

int main()
{
	int num, c;
	scanf("%d", &num);

	char **str = new char*[num];

	while((c=getchar())!='\n' && c!= EOF);

	for(int i=0; i<num; i++)
	{
		str[i] = new char[20];
//		fgets(str[i], 20, stdin);
//		str[strlen(str[i]) - 1] = '\0';
//		gets(str[i]);
		scanf(" %[^\n]s", str[i]);
	}

	for(int i=0; i<num; i++)
	{
		int repeat_num = *(str[i]) - '0';

		for(int k=2; k<strlen(str[i]); k++)
			for(int j=0; j<repeat_num; j++)
			{
				printf("%c", *(str[i] + k));
			}
		
//		printf("\n");
	}

	return 0;
}
