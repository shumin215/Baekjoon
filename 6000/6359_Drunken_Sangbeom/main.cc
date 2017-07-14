#include <iostream>

using namespace std;

int main()
{
	int num;
	cin >> num;

	while(num--)
	{
		int num_of_room;
		int room[101] = {0};
		cin >> num_of_room;

		for(int i=1; i<=num_of_room; i++)
		{
			for(int j=1; j*i <=num_of_room; j++)
			{
				room[i*j] = !room[i*j];
			}
		}

		/* print */
		for(int i=1; i<=num_of_room; i++)
		{
			room[0] += room[i];
		}
		cout << room[0] << endl;
	}

	return 0;
}
