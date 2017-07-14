#include <iostream>
#include <cstdio>
#include <cmath>

#define MAXIMUM 2147483648

using namespace std;

int getNumber(long long distance)
{
	for(long long i=1; i<=(int)sqrt(MAXIMUM); i++)
	{
		if(distance > i*i && i*(i+1) >= distance)
		{
			return 2*i;
		}
		else if(distance > i*(i+1) && (i+1)*(i+1) >=distance)
		{
			return (2*i)+1;
		}
	}
}

int getCount(long long remaining, int speed)
{
	int result = 0;

	while(remaining > 0)
	{
		/* If remaining distance is bigger than two times of speed */
		if(remaining > speed * 2)
		{
			result += 2;
			remaining -= speed * 2;
			speed++;
		}
		else
		{
			int quotient = remaining / speed;
			remaining -= quotient * speed;
			result += quotient;
			speed--;
		}
	}

	return result;
}

int main()
{
	int num;
	cin >> num;

	while(num--)
	{
		int x, y;
		cin >> x >> y;

		if(x == y)
			cout << "0" << endl;
		else if(y - x == 1)
			cout << "1" << endl;
		else
			cout <<  getNumber(y-x) << endl;

	}
	return 0;
}
