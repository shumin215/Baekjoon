#include <iostream>

using namespace std;

int main()
{
	int num;
	int count = 1;
	cin >> num;

	int num_iter = (2*num) - 1;

	while(num_iter--)
	{
		for(int i=0; i<count; i++)
		{
			cout << "*";
		}
		cout << endl;

		if(num_iter >= num)
			count++;
		else
			count--;
	}
	return 0;
}
