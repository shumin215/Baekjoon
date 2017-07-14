#include <cstdio>

int main()
{
	int num;
	bool is_answer = false;
	int weight = 1;
	int *count;
	char **str;
	scanf("%d", &num);

	str = new char*[num];
	count = new int[num];

	for(int i=0; i<num; i++)
	{
		*(count+i) = 0;
		str[i] = new char[100];
		scanf("%s", str[i]);
	}

	for(int i=0; i<num; i++)
	{
		char *iter = str[i];
		weight = 1;
		is_answer = false;

		while(*iter != '\0')
		{
			if(*iter == 'O')
			{
				is_answer = true;
				*(count+i) += weight;
				weight += 1;
			}
			else if(*iter == 'X')
			{
				is_answer = false;
				weight = 1;
			}

			iter++;
		}
	}

	for(int i=0; i<num; i++)
		printf("%d\n", *(count+i));

	/* Deallocate array */
	for(int i=0; i<num; i++)
	{
		delete[] str[i];
	}
	delete[] str;

	return 0;
}
