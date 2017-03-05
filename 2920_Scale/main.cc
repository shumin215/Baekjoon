#include <cstdio>

int main()
{
	int scale[8];
	int as_count = 0, des_count = 0;
	bool is_ascending = false;
	bool is_descending = false;

	for(int i=0; i<8; i++)
	{
		scanf("%d", scale+i);
	}

	for(int i=0; i<7; i++)
	{
		if(scale[0] == 1)
		{
			if(scale[i+1] - scale[i] == 1)
			{
				is_ascending = true;
				as_count++;
			}
		}
		else if(scale[0] == 8)
		{
			if(scale[i] - scale[i+1] == 1)
			{
				is_descending = true;
				des_count++;
			}
		}
		else
			break;
	}

	if(as_count == 7)
		printf("ascending\n");
	else if(des_count == 7)
		printf("descending\n");
	else
		printf("mixed\n");

	return 0;
}
