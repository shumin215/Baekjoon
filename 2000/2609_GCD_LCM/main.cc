#include <iostream>

using namespace std;

int getGCD(int x, int y){

	if (y == 0)
	{
		return x;
	}
	else
	{
		return getGCD(y, x%y);
	}
}

int getLCM(int val1, int val2)
{
	return (val1 * val2) / getGCD(val1, val2);
}

int main()
{
	int x, y;
	cout << "X :";
	cin >> x;
	cout << "Y :";
	cin >> y;

	cout << "GCD: " << getGCD(x, y) << endl;
	cout << "LCM: " << getLCM(x, y) << endl;

	return 0;
}
