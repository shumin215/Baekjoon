#include <iostream>

using namespace std;

int main()
{
	int num, result = 1;
	int array = 0;
	cin >> num;

	for(int i=0; i<num; i++)
	{
		cin >> array;
		result = result + array - 1;
	}

	cout << result << endl;

	return 0;
}
