#include <cstdio>
#include <cmath>

bool isPrime(int _num)
{
    for(int i=2; i<=(int)floor(sqrt((float)_num)); i++)
    {
        if(_num % i == 0)
        {
            return false;
        }
    }

//    printf("%d : prime number\n", _num);
    return true;
}

int main()
{
    int number;

    while(1)
    {
        scanf("%d", &number);

        if(number == 0)
            break;
        else
        {
            int prime_count = 0;

            for(int i=number+1; i<=2*number; i++)
            {
                if(isPrime(i))
                    prime_count++;
            }

//            printf("Total Prime number : %d\n", prime_count);
            printf("%d\n", prime_count);
        }
    }


    return 0;
}
