#include <cstdio>

int main()
{
	int num;
	bool isCorrect = false;
	int continue_num = 0;
	int result = 0;
	int *score;

	scanf("%d", &num);

	score = new int[num];

	for(int i=0; i<num; i++)
	{
		scanf("%d", score+i);
		if(*(score+i) == 1)
		{
			continue_num++;
		}
		else
		{
			continue_num = 0;
		}

		result += continue_num;
	}

	printf("%d\n", result);

	delete[] score;

	return 0;
}
