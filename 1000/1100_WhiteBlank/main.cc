#include <iostream>

using namespace std;

int main()
{
	char chess[8][9];
	int count = 0;

	for(int i=0; i<8; i++)
	{
		cin >> chess[i];
	}

	for(int i=0; i<8; i++)
	{
		for(int j=0; j<8; j+=2)
		{
			if(chess[i][j] == 'F' && i % 2 == 0)
				count++;
			else if(chess[i][j+1] == 'F' && i % 2 == 1)
				count++;
		}
	}

	cout << count << endl;

	return 0;
}
