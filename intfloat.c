#include <stdio.h>

int main() {
    int num;
    float decimal, sum;
    printf("Enter an integer: ");
    scanf("%d", &num);
    printf("Enter a float: ");
    scanf("%f", &decimal);
    sum = num + decimal;
    printf("Sum of %d and %.2f is: %.2f\n",num,decimal, sum);
    return 0;
}
