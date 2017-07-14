#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
#include <cmath>

using namespace std;

int getFrequent(vector<int> &list)
{
	vector<int>::iterator iter;
	int mostFrequentVal = 0;
	int highestFrequency = 0;
	int currentFrequency = 0;
	bool isSameFreq = false;
	vector<int> repeatedList;

	int size = list.size();

	for(int i=1; i<size; i++)
	{
		currentFrequency++;

		if(i == size-1 && list[i-1] == list[i])
		{
			currentFrequency++;
		}

		if(list[i-1] != list[i] || i == size-1)
		{
			if(currentFrequency > highestFrequency)
			{
				highestFrequency = currentFrequency;
				mostFrequentVal = list[i-1];
				isSameFreq = false;
				repeatedList.clear();
			}
			else if(currentFrequency == highestFrequency)
			{
				isSameFreq = true;
				repeatedList.push_back(list[i-1]);
				repeatedList.push_back(list[i]);
			}

			currentFrequency = 0;
		}
	}

	if(isSameFreq == true)
	{
		return repeatedList[0];
	}

	return mostFrequentVal;
}

double Rounding( double x, int digit )
{
//	printf("x: %.2f\n", x);

	return ( floor( (x) * pow( float(10), digit ) + 0.5f ) / pow( float(10), digit ) );
}

double getAverage(vector<int> &list)
{
	vector<int>::iterator iter = list.begin();
	double sum = 0;

	while(iter != list.end())
	{
		sum += *iter;
		iter++;
	}

	
//	printf("sum: %.2f\n", sum);
	return Rounding(sum / (double)list.size(), 0);
}

int main()
{
	int num;
	vector<int> list;

	cin >> num;

	for(int i=0; i<num; i++)
	{
		int value;
		cin >> value;

		list.push_back(value);
	}

	sort(list.begin(), list.end());

	cout << "Average: " << getAverage(list) << endl;
//	cout << getAverage(list) << endl;

	cout << "Center: " << list[num/2] << endl;
//	cout << list[num/2] << endl;

	cout << "Frequent: " << getFrequent(list) << endl;
//	cout << getFrequent(list) << endl;

	cout << "Scope: " << list[num-1] - list[0] << endl;
//	cout << list[num-1] - list[0] << endl;

	return 0;
}
