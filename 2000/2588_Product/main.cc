#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int value1, value2;
	int sum = 0;
	cin >> value1 >> value2;

	for(int i=0; i<3; i++)
	{
		int result = value1 * (value2 % 10);
		cout << result << endl;
		value2 /= 10;
		sum += result * pow((double)10, (double)i);
	}

	cout << sum << endl;

	return 0;
}
