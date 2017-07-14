#include <iostream>

using namespace std;

int main()
{
	int num;

	int count = 0;
	cin >> num;
	int total_candy;

	/* Taekhee condition */
	for(int i=2; i<=num-4; i+=2)
	{
		int namkyu_candy = 3;
		
		for(; namkyu_candy <= num - i - 1; namkyu_candy++)
		{
			int yunghoon_candy = num - i - namkyu_candy;

			

			if(namkyu_candy - 2 >= yunghoon_candy && yunghoon_candy > 0)
			{
//				cout << "younghoon: " << yunghoon_candy << endl;
//				cout << "namkyu: " << namkyu_candy << endl;
//				cout << "taek: " << i << endl;
				count++;
			}
		}
	}

	cout << "count: " << count << endl;

	return 0;
}
