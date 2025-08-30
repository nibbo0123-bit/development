#include <stdio.h>

int main() {
    float num = 7.89;
    int intNum;
    intNum = (int)num;
    printf("Original float value: %.2f\n", num);
    printf("After explicit type casting to int: %d\n", intNum);
    return 0;
}