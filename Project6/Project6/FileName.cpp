#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    double x = 0;
    double y = 0;
    int count = 0, circle = 0;
    double percent = 0;
    srand(time(NULL));

    while (count < 10000) {
        x = (double)rand() / (double)RAND_MAX;
        y = (double)rand() / (double)RAND_MAX;
        count++;

        if ((x * x) + (y * y) <= 1) {
            circle++;
        }

        percent = ((double)count / 10000) * 100.0; // 퍼센트 계산
        printf("%.2lf%% 진행.. 원주율 : %.6lf\n", percent, (circle / (double)count) * 4);
    }
    
    printf("원주율 : %.6lf\n", (circle / (double)count) * 4);
    return 0;
}