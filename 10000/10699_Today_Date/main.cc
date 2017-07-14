#include <ctime>
#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
	time_t cur_time = time(NULL);

	struct tm *cur_tm = localtime(&cur_time);

//	cout << cur_tm->tm_year+1900 << "-" << cur_tm->tm_mon+1 << "-" << cur_tm->tm_mday << endl;
	printf("%4d-%02d-%02d\n", cur_tm->tm_year+1900, cur_tm->tm_mon+1, cur_tm->tm_mday);

	return 0;
}
