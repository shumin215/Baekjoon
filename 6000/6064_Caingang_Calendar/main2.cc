#include <iostream>
#include <algorithm>

using namespace std;

int getGCD(int x, int y)
{
	if(y == 0)
	{
		return x;
	}
	else
	{
		return getGCD(y, x % y);
	}
}

int getLCM(int x, int y)
{
	return (x * y) / getGCD(x, y);
}

int main()
{
	int num;
	cin >> num;

	while(num--)
	{
		int M, N, x, y;
		cin >> M >> N >> x >> y;
		bool isValid = false;

//		if(M < N)
//		{
//			swap(M, N);
//			swap(x, y);
//		}

		int last_year = getLCM(M, N);

		for(int i=x; i<last_year; i+=M)
		{
			if(i % N == y)
			{
				cout << i << endl;
				isValid = true;
				break;
			}
		}

		if(!isValid)
			cout << "-1" << endl;
	}

	return 0;
}
