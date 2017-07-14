#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int x, y, w, h;
	cin >> x >> y >> w >> h;

	if(min(x, w-x) < min(y, h-y))
		cout << min(x, w-x) << endl;
	else
		cout << min(y, h-y) << endl;
	return 0;
}
