#include <cstdio>

int main()
{
	int count = 0;
	int size;
	char *str;

	scanf("%s", str);
	printf("size : %d, strind : %s\n", sizeof(str), str);
	size = sizeof(str);

	while(count != size)
	{
		printf("%c", *(str+count));
		count++;

		if(count % 10 == 0)
			printf("\n");
	}
	printf("\n");

	return 0;
}
