#include <iostream>
#include <cstring>
#include <algorithm>

#define INFINITE 99999

using namespace std;

int main()
{
	int num_of_cities, num_of_buses, info[100][100];
	cin >> num_of_cities >> num_of_buses;

	/* Initialize memory */
	for(int i=0; i<num_of_cities; i++)
	{
		for(int j=0; j<num_of_cities; j++)
		{
			info[i][j] = i == j ? 0 : INFINITE;
		}
	}

	/* Get information */
	for(int i=0; i<num_of_buses; i++)
	{
		int a, b, c;
		cin >> a >> b >> c;
		info[a-1][b-1] = min(info[a-1][b-1], c);
	}

	/* Floyd Algorithm */
	for(int k=0; k<num_of_cities; k++)
		for(int i=0; i<num_of_cities; i++)
			for(int j=0; j<num_of_cities; j++)
			{
				info[i][j] = min(info[i][j], info[i][k]+info[k][j]);
			}

	for(int i=0; i<num_of_cities; i++)
	{
		for(int j=0; j<num_of_cities; j++)
			cout << info[i][j] << " ";

		cout << endl;
	}
	
	return 0;
}
