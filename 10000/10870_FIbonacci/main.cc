#include <iostream>

using namespace std;

int fibonacci(int num)
{
	if(num == 1)
		return 0;
	else if(num == 2)
		return 1;
	else
		return (fibonacci(num-1) + fibonacci(num-2));

}

int main()
{
	int num;
	cin >> num;

	if(num == 0)
		cout << 0 << endl;
	else if(num == 1)
		cout << 1 << endl;
	else
		cout << fibonacci(num+1) << endl;

	return 0;
}
