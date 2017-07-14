#include <iostream>
#include <cstdio>
#include <string>

using namespace std;

int main()
{
	int N, F;
	cin >> N;
	cin >> F;

	N = (N / 100) * 100;

	int remainder = N % F;
	int result = N + (F - remainder);

	if(remainder == 0)
		result = N;
//	cout << "result: " << result << endl;

//	string str = to_string(result);
//	cout << str << endl;

	if(result % F == 0)
	{
		printf("%02d\n", result % 100);
	}

	return 0;
}
