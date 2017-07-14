#include <iostream>

using namespace std;

int main()
{
	int array[5] = {0};

	for(int i=0; i<5; i++)
	{
		cin >> array[i];
	}

	int sum = 0;

	for(int i=0; i<5; i++)
	{
		sum += array[i] * array[i];
	}
	cout << sum % 10 << endl;

	return 0;
}
