#include <cstdio>

void swap(int *_arr, int _x, int _y)
{
    int temp = _arr[_x];
    _arr[_x] = _arr[_y];
    _arr[_y] = temp;
}

void performBubbleSort(int *_array, int _size)
{
    int i, j;

    for(int i=0; i<_size; i++)
    {
        for(j=0; j<_size-1-i; j++)
        {
            if(_array[j] > _array[j+1])
            {
                swap(_array, j, j+1);
            }
        }
    }
}

int main()
{
    int month, day;

    scanf("%d", &month);
    scanf("%d", &day);

    if(month < 2)
        printf("Before\n");
    else if(month > 2)
        printf("After\n");
    else
    {
        if(day < 18)
            printf("Before\n");
        else if(day > 18)
            printf("After\n");
        else
            printf("Special\n");
    }

    return 0;
}
