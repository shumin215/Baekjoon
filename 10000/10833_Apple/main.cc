#include <iostream>

using namespace std;

int main()
{
	int num;
	cin >> num;
	int remainder = 0;

	while(num--)
	{
		int people, apple;
		cin >> people >> apple;
		remainder += apple % people;
	}

	cout << remainder << endl;

	return 0;
}
