#include <cstdio>

int main()
{
	int num, k, t;
	int three_digits[3] = {0, 0, 0};
	int han = 0;
	scanf("%d", &num);

	for(int i=1; i<=num; i++)
	{
		if(i < 100)
		{
			han = i;
		}
		else if(i == 1000)
			break;
		else
		{
			k = 0;
			t = i;
			while(t > 0)
			{
				three_digits[k] = t % 10;
				t /= 10;
				k++;
			}

			if(three_digits[0] - three_digits[1] == three_digits[1] - three_digits[2])
				han++;
		}
	}

	printf("%d\n", han);

	return 0;
}
