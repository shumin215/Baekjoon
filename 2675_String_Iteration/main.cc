#include <cstdio>
#include <cstring>
#include <cstdlib>

int main()
{
	int num;
	scanf("%d", &num);

	char **str = new char*[num];

	for(int i=0; i<num; i++)
	{
		str[i] = new char[20];
		fgets(str[i], sizeof(str), stdin);
//		gets(str[i]);
//		scanf("%[^\n]s", str[i]);
	}

	for(int i=0; i<num; i++)
	{
		int repeat_num = *(str[i]) - '0';

		for(int k=2; k<strlen(str[i]); k++)
			for(int j=0; j<repeat_num; j++)
			{
				printf("%c", *(str[i] + k));
			}
		
		printf("\n");
	}

	return 0;
}
