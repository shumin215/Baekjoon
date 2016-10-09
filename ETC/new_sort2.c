#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* 이 소스코드는 2 부터 N 까지의 수 사이의 소수만 선택해서
 * 보여준다. 사용된 알고리즘은 에라토스테네스의 체 이다.
 * (개선된 소수 발견방법) */

//#define Num 10000

int main()
{
    int Num;

    scanf("%d", &Num);
    //         범위+1 크기의 배열 생성
//    static int prime[Num+1];
    int *prime = (int *)malloc(sizeof(int) * (Num*2+1));
    int i, j, limit;

    // 생성한 배열을 1로 초기화
    for (i=2; i<=Num*2; i++)
        prime[i] = 1;

    // 입력 범위의 root 씌운 값의 정수값을 limit 으로 할당
    limit = (int)sqrt(Num);

    // 루프를 돌면서 앞서 해봤던 소수판별방식으로 소수만 계속 1로 남긴다.
    // 2의 배수, 3의 배수 등은 모두 0 으로 변경한다.
    // 마치 체에 소수만 탈탈~ 걸러내는 것처럼 해본다.
    for (i=2; i<=limit; i++) {

        // 1 이라는 건 즉 상태가 아직 변경 안된 것으로 추정할 수 있다. 검사해보자.
        if (prime[i] == 1) {

            // i 에 2 배한 값 j 를 i 로 나눠 0 이 되는지 (즉 소수가 아닌지) 보고
            // 또 그 j 에 1을 더한 3 을 i 에 곱해서 다시 i 로 나눠 0 이 되는지 보고... (반복)
            for (j=2*i; j<=Num; j++) {

                // 나눠 떨어지는 수가 있다면 그 놈은 이미 소수가 아니다!
                if (j % i == 0)
                    prime[j] = 0;
            }
        }
    }

    // 여기까지 오면 배열에서 소수 숫자로 된 인덱스만 1 이고 나머지는 다 0 으로 바뀐 상태다.
    int result_num = 0;
    printf("2 ~ %d 사이의 소수\n\n", Num);

    for (i=2; i<Num; i++) {
        if (prime[i] == 1) {
            printf("%5d", i);
            result_num++;
        }
    }

    printf("\n\n%d\n", result_num);

    return 0;
}
