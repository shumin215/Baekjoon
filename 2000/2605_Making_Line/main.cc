#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> list;
	int num;
	cin >> num;

	for(int i=0; i<num; i++)
	{
		int order;
		cin >> order;

		vector<int>::iterator iter = list.begin();
		for(int j=0; j<i-order; j++)
			iter++;

		list.insert(iter, i+1);
	}

	for(int i=0; i<list.size(); i++)
	{
		cout << list[i] << " ";
	}
	cout << endl;

	return 0;
}
