#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Index
{
	Index(int _x=-1, int _y=-1, bool _isDone = false)
	{
		x = _x;
		y = _y;
		isDone = _isDone;
	}

	int x;
	int y;
	bool isDone;
};

int main()
{
	vector<int> dwarfs;
	Index idx;

	for(int i=0; i<9; i++)
	{
		int input;
		cin >> input;
		dwarfs.push_back(input);
	}

	/* Sort */
	sort(dwarfs.begin(), dwarfs.end());

	for(int i=0; i<9; i++)
	{
		for(int j=0; j<9; j++)
		{
			if(i == j)
				continue;

			/* Calculate sum */
			int sum = 0;
			for(int k=0; k<9; k++)
			{
				if(k != i && k != j)
					sum += dwarfs[k];
			}

			if(sum == 100)
			{
				idx.x = i;
				idx.y = j;
				idx.isDone = true;
				break;
			}
		}

		if(idx.isDone == true)
			break;
	}

	/* Print */
	for(int i=0; i<9; i++)
	{
		if(i != idx.x && i != idx.y)
			cout << dwarfs[i] << endl;
	}

	return 0;
}
