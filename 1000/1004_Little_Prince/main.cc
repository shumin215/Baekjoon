#include <iostream>
#include <cmath>

using namespace std;

double getDistance(int x1, int y1, int x2, int y2)
{
	return sqrt(pow(x2-x1, 2) + pow(y2-y1, 2));
}

int main()
{
	int num;
	cin >> num;

	while(num--)
	{
		int x1, y1, x2, y2;
		int num_of_planet;
		int count_of_access = 0;
		cin >> x1 >> y1 >> x2 >> y2;
		cin >> num_of_planet;


		while(num_of_planet--)
		{
			int cx, cy, r;
			cin >> cx >> cy >> r;

			double start_dist = getDistance(cx, cy, x1, y1);
			double dest_dist = getDistance(cx, cy, x2, y2);

			if((start_dist < r && dest_dist > r) ||
					start_dist > r && dest_dist < r)
			{
				count_of_access++;
			}
		}

		cout << count_of_access << endl;
	}

	return 0;
}
