#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <string>

#define BUF_SIZE 100

using namespace std;

int main(int argc, char *argv[])
{
	if(argc < 3)
	{
		printf("Usage: converter [existing filename] [new filename]\n");

		return -1;
	}

	FILE *fin, *ftarget;
	char buffer[BUF_SIZE];

	fin = fopen(argv[1], "rt");
	ftarget = fopen(argv[2], "w+t");
	
	if(fin == 0)
	{
		printf("Unable to open %s, so program is terminated.\n", argv[1]);
		return -1;
	}

	while(fgets(buffer, BUF_SIZE, fin) != 0)
	{
		string buf_str = string(buffer);
		int len = buf_str.size();
		int pos = 0;

		/* This program is not complete*/
		while((pos = buf_str.find(' ')) != string::npos)
		{
			buf_str.erase(pos, 1);
			
		}
	}

	fclose(fin);

	return 0;
}
