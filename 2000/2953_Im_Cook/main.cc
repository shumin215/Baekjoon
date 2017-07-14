#include <iostream>

using namespace std;

int main()
{
	int max_sum = 0;
	int winner;

	for(int i=0; i<5; i++)
	{
		int a, b, c, d;
		cin >> a >> b >> c >> d;

		int sum = a + b + c + d;

		if(max_sum < sum)
		{
			max_sum = a + b + c + d;
			winner = i+1;
		}
	}

	cout << winner << " " << max_sum << endl;

	return 0;
}
