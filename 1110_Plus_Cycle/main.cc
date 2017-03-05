#include <cstdio>

int main()
{
	int init;
	scanf("%d", &init);

	int count = 1;
	int first = init / 10, second = init % 10, result = first + second;
	int new_result;

	if(result > 9)
		new_result = (second * 10) + (result % 10);
	else
		new_result = (second * 10) + result;

	while(new_result != init)
	{
		first = new_result / 10;
		second = new_result % 10;
		result = first + second;

		if(result > 9)
			new_result = (second * 10) + result % 10;
		else
			new_result = (second * 10) + result;

		count++;
	}

	printf("%d\n", count);

	return 0;
}
