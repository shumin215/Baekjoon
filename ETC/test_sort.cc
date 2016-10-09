#include <iostream>
#include <cmath>
using namespace std;

int main(){
    unsigned int num;
    cout << "소수를 구할 수를 입력하세요 : ";
    cin >> num;
    bool isPrime = true;

    bool* bArr;
    bArr = new bool[num+1];

    for (int i=2; i<=num; ++i)
        bArr[i] = true;

    for (int i=2; i<=sqrt(num); ++i)
    {
        if (bArr[i])
        {
            for (int j=i*i; j<=num; j+=1)
                bArr[j] = false;
        }

    }

    for (int i=2; i<num; ++i)
    {
        if (bArr[i] == true)
        {
            isPrime = true;
            break;
        }
    }

    if(isPrime)
        cout << num << "은 소수입니다." << endl;
    else
        cout << num << "은 소수가 아닙니다." << endl;

    return 0;
}

