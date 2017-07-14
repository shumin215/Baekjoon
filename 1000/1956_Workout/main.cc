#include <iostream>
#include <algorithm>

#define INF 9999999
#define MAX 400
using namespace std;

int main()
{
	int v, e, array[MAX][MAX];
	cin >> v >> e;

	/* Initialize */
	for(int i=0; i<v; i++)
		for(int j=0; j<v; j++)
		{
			array[i][j] = INF;
		}

	/* Get input data */
	for(int i=0; i<e; i++)
	{
		int from, to, dist;
		cin >> from >> to >> dist;

		array[from-1][to-1] = min(array[from-1][to-1], dist);
	}

	/* Floyd algorithm */
	for(int k=0; k<v; k++)
		for(int i=0; i<v; i++)
			for(int j=0; j<v; j++)
			{
				array[i][j] = min(array[i][j], array[i][k]+array[k][j]);
			}

	int min = INF;

	for(int i=0; i<v; i++)
	{
		if(min > array[i][i])
			min = array[i][i];
	}

	cout << ((min == INF) ? -1 : min) << endl;

	return 0;
}
