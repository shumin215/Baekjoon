#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>

using namespace std;

int main()
{
	int num;
	cin >> num;
	int *each_time = new int[num];
	memset(each_time, 0, num);

	vector<int> list;

	for(int i=0; i<num; i++)
	{
		int temp;
		cin >> temp;
		list.push_back(temp);
	}

	sort(list.begin(), list.end());

	for(int i=0; i<num; i++)
	{
		if(i == 0)
		{
			each_time[i] = list[i];
		}

		each_time[i] = each_time[i-1] + list[i];
	}

	int total_time = 0;

	for(int i=0; i<num; i++)
	{
		total_time += each_time[i];
	}

	cout << total_time << endl;

	return 0;
}
