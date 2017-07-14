#include <iostream>

using namespace std;

int getNumOfPrime(int _num)
{
	int num_of_prime = 0;
	int *array;
	array = new int[_num+1];

	for(int i=2; i<=_num; i++)
	{
		array[i] = i;
	}

	for(int i=2; i<=_num; i++)
	{
		if(array[i] == 0)
			continue;

		for(int j=i+i; j<=_num; j+=i)
		{
			array[j] = 0;
		}
	}

	for(int i=2; i<=_num; i++)
	{
		if(array[i] != 0)
		{
//			cout << array[i] << " ";
			num_of_prime++;
		}
	}

	delete[] array;

	return num_of_prime;
}

int main()
{
	while(1)
	{
		int num;
		cin >> num;

		if(num == 0)
			return 0;

//		cout << "Prime num: " << getNumOfPrime(num) << endl;
		
		cout << getNumOfPrime(num*2) - getNumOfPrime(num) << endl;
	}
	return 0;
}
