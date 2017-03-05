#include <cstdio>

int main()
{
	int kilo;
	int five_bag = 0, three_back = 0;
	int num_of_bag = 0;

	scanf("%d", &kilo);

	if(kilo % 5 == 0)
	{
		num_of_bag = kilo / 5;
		kilo %= 5;
	}
	else
	{
		while(kilo >= 3)
		{
			kilo -= 3;
			num_of_bag++;

			if(kilo % 5 == 0)
			{
				num_of_bag += kilo / 5;
				kilo %= 5;
			}

			if(kilo == 0)
				break;
		}
	}

	if(kilo != 0)
	{
		printf("-1\n");
		
		return 0;
	}

	printf("%d\n", num_of_bag);

	return 0;
}
