#include<cstdio>

int main()
{
	int num;
	int stat[8] = {0};
	int first, second, third, fourth;

	scanf("%d", &num);

	for(int i=0; i<num; i++)
	{
		int result = 0;

		scanf("%d %d %d %d %d %d %d %d", &stat[0], &stat[1], &stat[2], &stat[3], &stat[4], &stat[5], &stat[6], &stat[7]);

		first = stat[0] + stat[4];
		second = stat[1] + stat[5];
		third = stat[2] + stat[6];
		fourth = stat[3] + stat[7];

		if(first < 1)
			result += 1;
		else
			result += first;

		if(second < 1)
			result += 5;
		else
			result += second * 5;

		if(third < 0)
			result += 0;
		else
			result += third * 2;

		result += fourth * 2;	

		printf("%d\n", result);
	}

	return 0;
}
