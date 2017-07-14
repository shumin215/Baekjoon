#include <iostream>

#define INF 99999
#define MAX 100

using namespace std;

int main()
{
	int n, m, relation[MAX][MAX];
	cin >> n >> m;

	/* Initialize */
	for(int i=0; i<n; i++)
		for(int j=0; j<n; j++)
		{
			relation[i][j] = INF;
//			relation[i][j] = (i==j ? 0 : INF);
		}

	/* Get input data */
	for(int i=0; i<m; i++)
	{
		int a, b;
		cin >> a >> b;
		relation[a-1][b-1] = 1;
		relation[b-1][a-1] = 1;
	}

	/* Floyd Algorithm */
	for(int k=0; k<n; k++)
		for(int i=0; i<n; i++)
			for(int j=0; j<n; j++)
			{
				relation[i][j] = min(relation[i][j], relation[i][k]+relation[k][j]);
			}

	int result = -1;
	int min = INF;
	/* Print results */
	for(int i=0; i<n; i++)
	{
		int sum = 0;

		for(int j=0; j<n; j++)
		{
//			if(i != j)
				sum += relation[i][j];
		}

		if(sum < min)
		{
			min = sum;
			result = i+1;
		}
	}

	cout << result << endl;

	return 0;
}
