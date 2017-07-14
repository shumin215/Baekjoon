#include <iostream>
#include <algorithm>

#define INFINITE 9999

using namespace std;

int main()
{
	int num, array[100][100];
	cin >> num;

	for(int i=0; i<num; i++)
		for(int j=0; j<num; j++)
		{
			array[i][j] = INFINITE;
		}

	for(int i=0; i<num; i++)
		for(int j=0; j<num; j++)
		{
			int a;
			cin >> a;
			array[i][j] = a == 0 ? INFINITE : a;
		}

	for(int k=0; k<num; k++)
		for(int i=0; i<num; i++)
			for(int j=0; j<num; j++)
			{
				array[i][j] = min(array[i][j], array[i][k] + array[k][j]);
			}

	for(int i=0; i<num; i++)
	{
		for(int j=0; j<num; j++)
		{
			cout << (array[i][j] == INFINITE ? 0 : 1) << " ";
		}
		cout << endl;
	}
	
	return 0;
}
