#include <iostream>

using namespace std;

int main()
{
	int cost, num, money;

	cin >> cost >> num >> money;

	int result = (cost*num) - money;

	if(result < 0)
		cout << "0" << endl;
	else
		cout << result << endl;

	return 0;
}
