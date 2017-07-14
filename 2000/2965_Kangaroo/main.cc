#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int a, b, c;
	cin >> a >> b >> c;

	int diff = max(b-a, c-b);

	cout << diff - 1 << endl;
	
	return 0;
}
