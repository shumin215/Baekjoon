#include <iostream>

using namespace std;

int main()
{
	int day;
	int result = 0;
	cin >> day;

	for(int i=0; i<5; i++)
	{
		int value;
		cin >> value;

		if(value == day)
			result++;
	}

	cout << result << endl;

	return 0;
}
