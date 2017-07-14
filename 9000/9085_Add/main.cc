#include <iostream>

using namespace std;

int main()
{
	int test_num;
	cin >> test_num;

	while(test_num--)
	{
		int num;
		int sum = 0;
		cin >> num;

		while(num--)
		{
			int value;
			cin >> value;

			sum += value;
		}
		cout << sum << endl;
	}
	return 0;
}
