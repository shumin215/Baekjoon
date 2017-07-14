#include <iostream>
#include <string>

using namespace std;

int main()
{
	string str;
	cin >> str;

	int str_size = str.size();
	bool bowl_state = true;
	unsigned height = 0;

	auto iter = str.begin();

	if(*iter == '(')
		bowl_state = true;
	else
		bowl_state = false;

	iter++;
	height += 10;

	while(*iter != '\0')
	{
		bool is_up;

		if(*iter == '(')
			is_up = true;
		else
			is_up = false;

		if(bowl_state == is_up)
			height += 5;
		else
		{
			height += 10;
			bowl_state = !bowl_state;
		}

		iter++;
	}

	cout << height << endl;

	return 0;
}
