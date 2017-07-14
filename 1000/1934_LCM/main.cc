#include <iostream>

using namespace std;

int getGCD(int x, int y)
{
	if(y == 0)
	{
		return x;
	}
	else
		return getGCD(y, x%y);
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
		int x, y;
		cin >> x >> y;

		cout << getLCM(x, y) << endl;
	}

	return 0;
}
