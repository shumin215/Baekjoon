#include <cstdio>
#include <iostream>

/******************************
 *
 *  3rd 1 	5 	15 	35 	70 	126
 *
 *  2nd 1 	4 	10 	20 	35 	56
 *
 *  1st 1 	3 	6 	10 	15 	21
 *
 *  0th 1 	2 	3 	4 	5 	6
 *
 *****************************/

using namespace std;

int appartment[15][15];

void initialize()
{
	for(int i=0; i<15; i++)
	{
		appartment[0][i] = i;
	}

	for(int i=1; i<15; i++)
	{
		for(int j=1; j<15; j++)
		{
			appartment[i][j] = appartment[i][j-1] + appartment[i-1][j];
		}
	}
}

int getResidentNum(int k, int n)
{
	return appartment[k][n];
}

int main()
{
	int num_of_case;
	cin >> num_of_case;

	initialize();

	for(int i=0; i<num_of_case; i++)
	{
		int k, n;

		cin >> k >> n;

		cout << getResidentNum(k, n) << endl;
	}

	return 0;
}
