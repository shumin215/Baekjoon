#include <cstdio>
#include <vector>
#include <algorithm>
#include <functional>

using namespace std;

int main()
{
	vector<int> sorted_list, origin_list;
	int temp_value;
	int result = 0;

	for(int i=0; i<8; i++)
	{
		scanf("%d", &temp_value);

		sorted_list.push_back(temp_value);
		origin_list.push_back(temp_value);
	}



	sort(sorted_list.begin(), sorted_list.end(), greater<int>());

	for(int i=0; i<5; i++)
		result += sorted_list[i];

	printf("%d\n",result);

	for(int i=0; i<8; i++)
	{
		for(int j=0; j<5; j++)
		{
			if(sorted_list[j] == origin_list[i])
			{
				printf("%d ", i+1);
				continue;
			}
		}
	}

	return 0;
}
