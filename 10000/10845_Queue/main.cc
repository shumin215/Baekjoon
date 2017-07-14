#include <iostream>
#include <queue>
#include <string>

using namespace std;

int main()
{
	int num;
	queue<int> my_queue;
	cin >> num;

	while(num--)
	{
		string str;
		cin >> str;

		if(str.find("push") != string::npos)
		{
			int src;
			cin >> src;
			my_queue.push(src);
		}
		else if(str.find("pop") != string::npos)
		{
			if(my_queue.empty())
				cout << -1 << endl;
			else
			{
				cout << my_queue.front() << endl;
				my_queue.pop();
			}
		}
		else if(str.find("size") != string::npos)
		{
			cout << my_queue.size() << endl;
		}
		else if(str.find("empty") != string::npos)
		{
			if(my_queue.empty())
				cout << 1 << endl;
			else
				cout << 0 << endl;
		}
		else if(str.find("front") != string::npos)
		{
			if(my_queue.empty())
				cout << -1 << endl;
			else
				cout << my_queue.front() << endl;
		}
		else if(str.find("back") != string::npos)
		{
			if(my_queue.empty())
				cout << -1 << endl;
			else
				cout << my_queue.back() << endl;
		}
	}

	return 0;
}
