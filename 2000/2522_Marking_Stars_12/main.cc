#include <cstdio>

int main()
{
	int num;
	scanf("%d", &num);

	for(int i=0; i<num; i++)
	{
		for(int j=0; j<num-1-i; j++)
		{
			printf(" ");
		}

		for(int j=0; j<=i; j++)
		{
			printf("*");
		}

		printf("\n");
	}

	for(int i=0; i<num-1; i++)
	{
		for(int j=0; j<=i; j++)
			printf(" ");

		for(int j=0; j<num-1-i; j++)
			printf("*");

		printf("\n");
	}


	return 0;
}
