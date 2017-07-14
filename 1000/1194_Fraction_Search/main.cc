#include <cstdio>

int main()
{
	int num;
	bool isSonOrderFirst = true;
	scanf("%d", &num);

	while(true)
	{
		for(int i=2; i<=10000; i++)
		{
			int son = 0;
			int mom = 0;

			for(int j=1; i>j; j++)
			{
				num--;

				if(isSonOrderFirst)
				{
					son = i - j;
					mom = i - son;
				}
				else
				{
					mom = i - j;
					son = i - mom;
				}
//				printf("%d/%d-->", son, mom);

				if(num == 0)
				{
//					printf("\n");
					printf("%d/%d\n", son, mom);
					return 0;
				}
			}

			isSonOrderFirst = !isSonOrderFirst;
		}
	}

	return 0;
}
