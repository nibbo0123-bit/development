#include <stdio.h>

int main() {
    int num = 10;
    float decimal = 5.5;  
    float result;
    result = num + decimal;

    printf("Integer value: %d\n", num);
    printf("Float value: %.2f\n", decimal);
    printf("Result of num + decimal: %.2f\n", result);

    return 0;
}
