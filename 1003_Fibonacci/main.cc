#include <cstdio>
#include <iostream>

using namespace std;

int fibonacci(int n, int &_zeroCount, int &_oneCount) 
{
    if (n==0) 
    {
        _zeroCount++;
//        printf("0");
        return 0;
    } 
    else if (n==1) 
    {
        _oneCount++;
//        printf("1");
        return 1;
    } 
    else 
    {
        return fibonacci(n-1, _zeroCount, _oneCount) + fibonacci(n-2, _zeroCount, _oneCount);
    }
}

int main()
{
    int oneCount = 0, zeroCount = 0;
    int numberOfProblem;

    scanf("%d", &numberOfProblem);

    for(int i=0; i<numberOfProblem; i++)
    {
        int inputNumber;
        scanf("%d", &inputNumber);
        fibonacci(inputNumber, zeroCount, oneCount);
        printf("%d %d\n", zeroCount, oneCount);

        oneCount = 0, zeroCount = 0;
    }
        
    return 0;
}
