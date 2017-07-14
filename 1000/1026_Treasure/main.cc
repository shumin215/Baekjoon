#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>

using namespace std;

int getMACOp(vector<int> A, vector<int> B)
{
	int size = A.size();
	int result = 0;

	for(int i=0; i<size; i++)
	{
		result += A[i] * B[i];
	}

	return result;
}

int main()
{
	int num;
	cin >> num;

	vector<int> A, B;

	for(int i=0; i<num; i++)
	{
		int temp;
		cin >> temp;
		A.push_back(temp);
	}

	for(int i=0; i<num; i++)
	{
		int temp;
		cin >> temp;
		B.push_back(temp);
	}

	sort(A.begin(), A.end());
	sort(B.begin(), B.end(), greater<int>());

	cout << getMACOp(A, B) << endl;

	return 0;
}
