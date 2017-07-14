#include <iostream>

using namespace std;

int main()
{
	int off_num[4] = {0}, on_num[4] = {0};
	int result = 0;
	int max_people = 0;

	for(int i=0; i<4; i++)
	{
		cin >> off_num[i] >> on_num[i];
	}

	for(int i=0; i<4; i++)
	{
		result += on_num[i] - off_num[i];
		if(max_people < result)
			max_people = result;
	}
	cout << max_people << endl;

	return 0;
}
