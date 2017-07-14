#include <iostream>

using namespace std;

int main()
{
	int num;
	int min = 0, max = 0;
	bool first = true;
	cin >> num;

	while(num--)
	{
		int input_num;
		cin >> input_num;

		if(first)
		{
			min = input_num;
			max = input_num;
			first = false;
		}

		if(min > input_num)
			min = input_num;

		if(max < input_num)
			max = input_num;
	}

	cout << min << " " << max << endl;

	return 0;
}
