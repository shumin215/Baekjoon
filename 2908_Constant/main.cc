#include<cstdio>

int swapNum(int a)
{
	int result = 0;
	int cnt = 1;

	while(a > 0)
	{
		result = result * 10;
		result += a % 10;

		a /= 10;
	}

	return result;
}

int main()
{
	int a, b;
	scanf("%d %d", &a, &b);

	int swapped_a = swapNum(a);
	int swapped_b = swapNum(b);

//	printf("swapped a: %d\n", swapped_a);
//	printf("swapped b: %d\n", swapped_b);

	if(swapped_a > swapped_b)
		printf("%d\n", swapped_a);
	else
		printf("%d\n", swapped_b);

	return 0;
}
