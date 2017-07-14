#include <cstdio>

int main()
{
	int a, b, c, d;

	for(int i=0; i<3; i++)
	{
		int count = 0;

		scanf("%d %d %d %d", &a, &b, &c, &d);

		if(a)
			count++;
		if(b)
			count++;
		if(c)
			count++;
		if(d)
			count++;

		if(count == 4)
			printf("E\n");
		else if(count == 3)
			printf("A\n");
		else if(count ==2)
			printf("B\n");
		else if(count == 1)
			printf("C\n");
		else
			printf("D\n");
	}

	return 0;
}
