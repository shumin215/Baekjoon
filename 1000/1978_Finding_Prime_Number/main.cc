#include <iostream>

using namespace std;

int main()
{
	int num;
	int count = 0;
	cin >> num;

	while(num--)
	{
		int value;
		bool isPrime = true;
		cin >> value;

		for(int i=2; i<value; i++)
		{
			if(value % i == 0)
			{
				isPrime = false;
				break;
			}
		}

		if(isPrime == true && value != 1)
			count++;
	}

	cout << count << endl;

	return 0;
}
