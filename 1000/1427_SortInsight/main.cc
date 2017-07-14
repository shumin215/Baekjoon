#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <functional>

using namespace std;

int main()
{
	int str;
	cin >> str;

	vector<int> list;

	while(str > 0)
	{
		list.push_back(str % 10);
		str /= 10;
	}

	sort(list.begin(), list.end(), greater<int>());

	for(int i=0; i<list.size(); i++)
	{
		cout << list[i];
	}

	cout << endl;

	return 0;
}
