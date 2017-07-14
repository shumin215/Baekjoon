#include <cstdio>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	std::vector<int> list;
	int arr[3];
	int similarity = 0;
	int result = 0;

	scanf("%d %d %d", arr, arr+1, arr+2);

	for(int i=0; i<3; i++)
		list.push_back(arr[i]);

	sort(list.begin(), list.end(), greater<int>() );

	if(list[0] == list[1])
	{
		similarity++; 
		result = list[0];

		if(list[0] == list[2])
		{
			similarity++;
		}
	}
	else if(list[0] == list[2])
	{
		similarity++;
		result = list[0];

		if(list[2] == list[1])
		{
			similarity++;
		}
	}
	else if(list[1] == list[2])
	{
		similarity++;
		result = list[1];
	}

	if(similarity == 2)
	{
		printf("%d\n", 10000+result*1000);
	}
	else if(similarity == 1)
	{
		printf("%d\n", 1000+result*100);
	}
	else
	{
		printf("%d\n", list[0]*100);
	}

	return 0;
}
