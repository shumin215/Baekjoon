#include <iostream>

using namespace std;

int main()
{
	int num;
	cin >> num;

	while(num--)
	{
		int car;
		int options, total_cost = 0;
		cin >> car;
		cin >> options;

		total_cost += car;

		for(int i=0; i<options; i++)
		{
			int num_options, option_cost;
			cin >> num_options >> option_cost;

			total_cost += num_options * option_cost;
		}

		cout << total_cost << endl;
	}

	return 0;
}
