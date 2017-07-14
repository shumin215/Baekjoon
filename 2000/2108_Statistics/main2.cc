#include <iostream>
#include <memory.h>
#include <algorithm>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int ccc[8000];

int main()
{
	int n = 0;

	cin >> n;

	int arr[50000] = { 0, };
	int res = 0;

	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];

		ccc[arr[i] + 4000]++;

		res += arr[i];
	}

	sort(arr, arr + n);

	double avg = (double)res / (double)n;
	int mma = arr[n - 1];
	int mmi = arr[0];

	int half = (n / 2) + 1;

	int cc_max = 2100000000;
	int cc_value = 0;

	int ccc_max = -2100000000;

	for (int i = 0; i < 8000; i++)
	{
		if (ccc[i] > ccc_max)
			ccc_max = ccc[i];
	}

	int fff = 0;

	for (int i = 0; i < 8000; i++)
	{
		if (ccc[i] == ccc_max)
		{
			cc_value = i - 4000;
			fff++;

			if (fff == 2)
				break;
		}
	}

	if (avg >= 0)
	{
		//반올림 하기
		double t_avg = avg + 0.5;

		int t1 = (int)t_avg;
		int t2 = (int)avg;

		if (t1 > t2)
		{
			//올림
			avg = t2 + 1;
		}
		else if (t1 == t2)
		{
			//내림
			avg = t2;
		}
	}
	else
	{
		//반올림 하기
		double t_avg = avg - 0.5;

		int t1 = (int)t_avg;
		int t2 = (int)avg;

		if (t1 < t2)
		{
			//올림
			avg = t2 - 1;
		}
		else if (t1 == t2)
		{
			//내림
			avg = t2;
		}
	}

	cout << avg << endl;
	cout << arr[half - 1] << endl;
	cout << cc_value << endl;
	cout << abs(mma - mmi) << endl;

	return 0;
}
