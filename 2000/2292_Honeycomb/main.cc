#include <iostream>

using namespace std;

int getNumOfRooms(int num)
{
	int level = 1;
	int edge_size = 1;
	int idx = 1;

	while(idx <= num)
	{
		if(idx > edge_size)
		{
//			cout << "Edge size: " << edge_size;

			edge_size += (6 * level);
			level++;

//			cout << "-->" << edge_size << endl;
		}

		idx++;
	}

	return level;
}

int main()
{
	int num;
	cin >> num;

	cout << getNumOfRooms(num) << endl;
	return 0;
}
