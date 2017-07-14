#include <iostream>

using namespace std;

int main()
{
	int num;
	int input_data[500][500] = {0}, return_data[500][500] = {0};

	cin >> num;

	for(int i=0; i<num; i++)
	{
		for(int j=0; j<i+1; j++)
		{
			cin >> input_data[i][j];
		}
	}

	return_data[0][0] = input_data[0][0];
	for(int i=0; i<num-1; i++)
		for(int j=0; j<i+1; j++)
		{
			/* Left side */
			if(return_data[i+1][j] < input_data[i+1][j] + return_data[i][j])
			{
				return_data[i+1][j] = input_data[i+1][j] + return_data[i][j];
			}

			/* Right side */
			if(return_data[i+1][j+1] < input_data[i+1][j+1] + return_data[i][j])
			{
				return_data[i+1][j+1] = input_data[i+1][j+1] + return_data[i][j];
			}
		}

	int max_value = 0;
	for(int i=0; i<num; i++)
	{
		if(max_value < return_data[num-1][i])
			max_value = return_data[num-1][i];
	}

	cout << max_value << endl;

	return 0;
}
