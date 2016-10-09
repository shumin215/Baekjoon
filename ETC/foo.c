#include <stdio.h>

int main(){
    int c, i, average, sum, k, numstu, l;
    float output;
    scanf("%d \n", &c);
    int N[1000];

    for (l = 1; l <= c; l++) {
        scanf("%d ", &numstu);
        sum = 0;
        for (i = 0; i < numstu; i++) {
            scanf("%d", &N[i]);
            sum += N[i];
        }

        average = sum / numstu;
        k = 0;
        for (i = 0; i < numstu; i++) {
            if (N[i] > average) {
                k++;
            }
        }
        output = 100 * k / (float)numstu;
        printf("%.3f%%\n", output);

    }
}
