#include <iostream>
#include <algorithm>
#include <vector>
#include <cstdio>

using namespace std;

int main()
{
	int num;
	scanf("%d", &num);
	vector<int> list;
	vector<int>::iterator iter;

	for(int i=0; i<num; i++)
	{
		int n;
		scanf("%d", &n);
		list.push_back(n);
	}

	sort(list.begin(), list.end());

	for(iter = list.begin(); iter != list.end(); iter++)
	{
		printf("%d\n", *iter);
	}

	return 0;
}
