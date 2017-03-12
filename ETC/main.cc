#include <iostream>
#include <cstdio>

using namespace std;

void callScanf()
{
	int num;
	scanf("%d", &num);
	char **str = new char*[num];

	for(int i=0; i<num; i++)
	{
		str[i] = new char[20];
//		cin >> str[i];
		scanf(" %[^\n]s", str[i]);
		printf("string: %s\n", str[i]);
	}
}

int main()
{
	/*
	char *str = new char[100];

	while((*str = getchar()) != EOF)
	{
//		gets(str);
//		scanf("%s", str);
		printf("%s", str);
	}
	*/
	callScanf();

	return 0;
}
