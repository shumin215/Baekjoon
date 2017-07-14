#include <cstdio>
#include <cmath>
#include <vector>

int main()
{
	int sum = 0;
	int value;
	std::vector<int> list;

	for(int i=0; i<10; i++)
	{
		scanf("%d", &value);
		list.push_back(value);
	}

	std::vector<int>::iterator iter = list.begin();
	while(iter != list.end())
	{
		int mushroom = *iter;
		iter++;

		if(std::abs(100 - sum) < std::abs(100 - (sum + mushroom)))
		{
			printf("%d\n", sum);
			return sum;
		}

		sum += mushroom;
	}

	printf("%d\n", sum);

	return 0;
}
