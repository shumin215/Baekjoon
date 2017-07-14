#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <ctime>

#define MAX_NUMBER 100
#define KIND_OF_NUMBER 10 
//#define MAX_NUMBER 10000000
//#define KIND_OF_NUMBER 10000 

void printArray(int *array)
{
	int size = sizeof(array) / sizeof(int);

	for(int i=0; i<size; i++)
	{
		printf("%d ", array[i]);
	}
	printf("\n");
}

void genRanNum(int *array)
{
	int size = sizeof(array) / sizeof(int);

	for(int i=0; i<size; i++)
	{
		array[i] = (rand() % KIND_OF_NUMBER) + 1;
		printf("%d ", array[i]);
	}
	printf("\n"); 
}

void accumulateNum(int *dest_array, int *src_array)
{
	int size = sizeof(src_array) / sizeof(int);

	for(int i=1; i<=size; i++)
	{
		dest_array[i] = dest_array[i-1] + src_array[i];
	}
}

int main()
{
	int size;
//	srand((unsigned)time(NULL));

	int *array = new int[MAX_NUMBER];
	memset(array, 0, sizeof(int)*MAX_NUMBER);
	int *table = new int[KIND_OF_NUMBER];
	memset(table, 0, sizeof(int)*(KIND_OF_NUMBER+1));
	int *result = new int[MAX_NUMBER];
	memset(result, 0, sizeof(int)*MAX_NUMBER);

	scanf("%d", &size);

	int input_array[size+1];

	/* Input values */
	for(int i=0; i<size; i++)
	{
		scanf("%d", &input_array[i]);

		array[input_array[i]]++;
	}
	printf("******* Input Array ********\n");
	printArray(input_array);

	accumulateNum(table, array);

	printf("****** Table Array ********\n");
	printArray(table);

	/* Trace */
	for(int i=size; i>=0; i--)
	{
		result[table[input_array[i]]] = input_array[i];
		table[input_array[i]]--;
	}

	printArray(result);

	return 0;
}
