#include <iostream>

using namespace std;

int main()
{
	int total = 0;
	int max_num = 0;

	for(int i=0; i<10; i++)
	{
		int input, output;

		cin >> input >> output;

		total = total - input + output;

		if(total > max_num)
			max_num = total;
	}

	cout << max_num << endl;

	return 0;
}
