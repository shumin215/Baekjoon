#include <iostream>

using namespace std;

int main()
{
	int num;
	cin >> num;

	for(int i=0; i<num; i++)
	{
		int dp[15] = {0};
		dp[0] = 1;
		int value;
		cin >> value;

		for(int i=1; i<=value; i++)
		{
			if(i-1 >= 0)
			{
				dp[i] += dp[i-1];
//				cout << "dp[" << i << "]: " << dp[i] << endl;
			}

			if(i-2 >= 0)
			{
				dp[i] += dp[i-2];
//				cout << "dp[" << i << "]: " << dp[i] << endl;
			}

			if(i-3 >= 0)
			{
				dp[i] += dp[i-3];
//				cout << "dp[" << i << "]: " << dp[i] << endl;
			}
		}

		cout << dp[value] << endl;
	}

	return 0;
}
