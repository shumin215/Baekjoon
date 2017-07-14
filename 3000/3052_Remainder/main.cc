#include <iostream>

using namespace std;

int main()
{
	int array[43] = {0};

	for(int i=0; i<10; i++)
	{
		int num;
		cin >> num;
		
		array[num%42]++;
	}

	int count = 0;
	for(int i=0; i<42; i++)
	{
		if(array[i] != 0)
			count++;
	}

	cout << count << endl;

	return 0;
}
