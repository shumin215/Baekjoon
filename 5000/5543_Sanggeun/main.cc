#include <iostream>

using namespace std;

int main()
{
	int berger_a, berger_b, berger_c;
	int coke_a, coke_b;
	int berger_min = 0, coke_min = 0;

	cin >> berger_a >> berger_b >> berger_c;
	cin >> coke_a >> coke_b;

	berger_min = berger_a;
	coke_min = coke_a;

	if(berger_b < berger_min)
	{
		berger_min = berger_b;

		if(berger_min > berger_c)
		{
			berger_min = berger_c;
		}
	}
	else if(berger_c < berger_min)
	{
		berger_min = berger_c;
	}

	if(coke_min > coke_b)
	{
		coke_min = coke_b;
	}

	cout << berger_min + coke_min - 50 << endl;

	return 0;
}
