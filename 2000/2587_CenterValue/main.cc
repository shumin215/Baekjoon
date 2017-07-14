#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>

using namespace std;

int main()
{
	int num[5];
	int sum = 0;
	vector<int> list;

	for(int i=0; i<5; i++)
	{
		cin >> num[i];
		sum += num[i];
		list.push_back(num[i]);
	}

	sort(list.begin(), list.end());

	cout << sum / 5 << endl;
	cout << list[2] << endl;

	return 0;
}
