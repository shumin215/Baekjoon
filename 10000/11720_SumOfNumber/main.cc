#include <cstdio>

int main()
{
	char num[101];
	int num_of_num;
	int value, sum=0;

	scanf("%d", &num_of_num);
	scanf("%s", num);

	for(int i=0; i<num_of_num; i++)
	{
		value = num[i] - '0';
		sum += value;
	}

	printf("%d\n", sum);
}
