#include <iostream>

using namespace std;

int main()
{
	int array[9][9] = {0};
	int max = 0;
	int x = 0, y = 0;

	for(int i=0; i<9; i++)
	{
		for(int j=0; j<9; j++)
		{
			cin >> array[i][j];
			if(max < array[i][j])
			{
				max = array[i][j];
				x = j;
				y = i;
			}
		}
	}

	cout << max << endl;
	cout << y+1 << " " << x+1 << endl;

	return 0;
}
