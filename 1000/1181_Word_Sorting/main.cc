#include <iostream>
#include <vector>
#include <string>
#include <functional>
#include <algorithm>

using namespace std;

bool sortFunc(const string &x, const string &y)
{
	if(x.size() == y.size())
	{
		/* dictionary order */
		return x<y;
	}
	return x.size() < y.size();
}

void printList(vector<string> list)
{
	for(int i=0; i<list.size(); i++)
	{
		if(i == list.size() - 1)
		{
			cout << list[i] << endl;
		}
		else if(list[i] != list[i+1])
		{
			cout << list[i] << endl;
		}
	}
}

int main()
{
	int num;
	vector<string> list;
	cin >> num;

	while(num--)
	{
		string temp;
		cin >> temp;

		list.push_back(temp);
	}

	sort(list.begin(), list.end(), sortFunc);

	printList(list);

	return 0;
}
