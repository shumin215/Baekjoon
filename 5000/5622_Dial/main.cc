#include <cstdio>
#include <cstring>

int main()
{
	int sec = 0;
	char *str = new char[20];

	scanf("%s", str);

	int str_size = strlen(str);

	for(int i=0; i<str_size; i++)
	{
//		if(*(str+i) < 'A' || *(str+i) > 'Z')
//		{
//			sec += 2;
//			continue;
//		}

		if(*(str+i) == 'Z')
		{
			sec += 10;
			continue;
		}

		int temp = *(str+i) - 'A';

		if(*(str+i) >= 'S')
		{
			temp--;
		}

//		printf("%d--", (temp / 3) + 3);
		sec += (temp / 3) + 3;
	}

	printf("%d\n", sec);

	delete[] str;

	return 0;
}
