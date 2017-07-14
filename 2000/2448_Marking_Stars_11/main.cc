#include <cstdio>

/******************************************
 *
 * x, y coordinates means the left top of 
 * minimum triangle 
 *--------------------
 * # *
 *  * *
 * *****
 *-------------------
 *
 *  x, y coordinates indicate the # shape
 *
 *  h: indicate the height of minimum triangle 
 *  offset: to mark the 3rd floor's star 
 *
 * **************************************/

void recursivePrintStar(char **array, 
						int x, 
						int y, 
						int h, 
						int offset) // offset indicates the position of 3rd floor's star 
{
	int i, pad = offset - y;

	if(h == 3)
	{
		/******** This is 3rd floor ********/
		array[y][x + pad--] = '*';
		/******** This is 2nd floor ********/
		array[y+1][x + pad] = '*';
		array[y+1][x + 2 + pad--] = '*';

		/******** This is 1st floor ********/
		for(int i=0; i<5; i++)
			array[y + 2][x + i + pad] = '*';

		return;
	}
	else
	{
		/****** right bottom triangle *******/
		recursivePrintStar(array,x+h, y+h/2, h/2, offset);
		/****** left bottom triangle *******/
		recursivePrintStar(array, x, y+h/2, h/2, offset);
		/****** center top triangle *******/
		recursivePrintStar(array, x, y, h/2, offset);
	}
}

void print(char **array, int h)
{
	for(int i=0; i<h; i++)
	{
		printf("%s\n", array[i]);
	}
}

int main()
{
	char **array;
	int w, i, h, j;

	scanf("%d", &h);

	array = new char*[h];
	w = h * 2 - 1; 		// This is the bottom side of a triangle

	for(int i=0; i<h; i++)
	{
		array[i] = new char[w+1]; 	// +1 is required for NULL pointer of a string
		array[i][w] = '\0';
	}

	for(int i=0; i<h; i++)
	{
		for(int j=0; j<w; j++)
		{
			array[i][j] = ' ';
		}
	}

	recursivePrintStar(array, 0, 0, h, h-1);
	print(array, h);

	for(int i=0; i<h; i++)
	{
		delete[] array[i];
	}

	delete[] array;

	return 0;
}
