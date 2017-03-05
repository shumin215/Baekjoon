#include <cstdio>
#include <vector>
#include <algorithm>
#include <functional>

int main()
{
	int num;
	float num_arr[100];
	float bigest;
	float sum = 0;
	std::vector<float> list;

	scanf("%d", &num);

	for(int i=0; i<num; i++)
	{
		scanf("%f", (num_arr+i));
		list.push_back(*(num_arr+i));
	}

	sort(list.begin(), list.end(), std::greater<float>() );

	bigest = list.front();

	std::vector<float>::iterator iter = list.begin();

	for(; iter != list.end(); iter++)
	{
		*iter = *iter / bigest * 100;
	}

	for(iter = list.begin(); iter != list.end(); iter++)
	{
		sum += *iter;
	}

	printf("%.2f\n", sum / num);

	return 0;
}
