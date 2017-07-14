#include <iostream>

using namespace std;

int main()
{
	int array[10];
	int max_val = 0;
	int max_idx;

	for(int i=0; i<9; i++)
	{
		cin >> array[i];
		
		if(array[i] > max_val)
		{
			max_val = array[i];
			max_idx = i+1;
		}
	}

	cout << max_val << endl;
	cout << max_idx << endl;

	return 0;
}
