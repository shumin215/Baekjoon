#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>

using namespace std;

int main()
{
	vector<int> list;
	int sum = 0;
	int array[100] = {0};

	for(int i=0; i<10; i++)
	{
		int num;
		cin >> num;
		list.push_back(num);
		array[num/10]++;

		sum += num;
	}

//	sort(list.begin(), list.end());
//
//	int num_of_elem = 0;
//	int max_count = 0;
//	int max_num;
//
//	for(int i=0; i<list.size() - 1; i++)
//	{
//		if(list[i] == list[i+1])
//		{
//			num_of_elem++;
//		}
//		else
//		{
//			num_of_elem = 0;
//		}
//
//		if(num_of_elem > max_count)
//		{
//			max_count = num_of_elem;
//			max_num = list[i];
//		}
//	}

	int array_max_count = 0;
	int array_max_val = 0;

	for(int i=0; i<100; i++)
	{
		if(array_max_count < array[i])
		{
			array_max_count = array[i];
			array_max_val = i * 10;
		}
	}


	/* Average */
	cout << sum / 10 << endl;

//	/* Recent Value */
//	cout << max_num << endl;

	cout << array_max_val << endl;

	return 0;
}
