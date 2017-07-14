#include <cstdio>
#include <cstring>

int main()
{
	char *str = new char[1000*1000 + 1];
	int count=0, legnth = 0;
	bool first_flag = false;

	gets(str);
	int strlength = strlen(str);

	while(*str != '\0')
	{
		if(*str >= 'A' && *str <= 'z')
			first_flag = true;
//		printf("The character: %c\n", *str);

		if(*str == ' ' && first_flag)
		{
			count++;
			first_flag = false;
		}

		str++;
	}


	if(strlength > 0 && first_flag)
		count++;

	printf("%d\n", count);

	return 0;
}
