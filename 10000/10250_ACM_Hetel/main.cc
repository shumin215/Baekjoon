#include <iostream>

using namespace std;

int main()
{
	int num;
	cin >> num;

	for(int i=0; i<num; i++)
	{
		int height, width, quest_num;
		int count = 0;
		cin >> height >> width >> quest_num;

		int floor= (quest_num % height) ? quest_num % height : height; 
		int room=((quest_num-1)/height) + 1;

		int room_num = (floor * 100) + (room);

		cout << room_num << endl;
	}

	return 0;
}
