#include <iostream>

using namespace std;

int main()
{
	int num;
	int result = 1;
	cin >> num;

	while(num)
	{
		if(num == 1)
			break;

		result *= num;

		num--;
	}

	cout << result << endl;

	return 0;
}
