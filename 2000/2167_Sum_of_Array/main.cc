#include <iostream>

using namespace std;

int main()
{
	int array_x, array_y;
	int array[301][301] = {0};

	/* Set array size */
	cin >> array_y >> array_x;

	for(int i=1; i<=array_y; i++)
	{
		for(int j=1; j<=array_x; j++)
		{
			/* Set each data of array */
			cin >> array[i][j];
		}
	}

	/* Get number of case */
	int num;
	cin >> num;

	for(int i=0; i<num; i++)
	{
		int x1, y1, x2, y2;
		cin >> y1 >> x1 >> y2 >> x2;

		int result = 0;

		/* If not, sum each element of array */
		for(int y=y1; y<=y2; y++)
		{
			for(int x=x1; x<=x2; x++)
			{
				result += array[y][x];
			}
		}

		cout << result << endl;
	}

	return 0;
}
