#include <iostream>

using namespace std;

int main()
{
	int total;
	int array[9];
	cin >> total;

	for(int i=0; i<9; i++)
	{
		cin >> array[i];
		total -= array[i];
	}

	cout << total << endl;

	return 0;
}
