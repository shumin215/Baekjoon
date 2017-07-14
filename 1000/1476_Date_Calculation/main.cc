#include <iostream>

using namespace std;

int count = 0;

void findYear(int E, int S, int M)
{
	count++;

	if(E < 1)
		E = 15;

	if(S < 1)
		S = 28;

	if(M < 1)
		M = 19;

	if(E == 1 && S == 1 && M == 1)
	{
		cout << count << endl;
		return;
	}

	findYear(E-1, S-1, M-1);
}

int main()
{
	int E, S, M;
	cin >> E >> S >> M;

	findYear(E, S, M);

	return 0;
}
