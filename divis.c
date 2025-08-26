#include <stdio.h>

int main() {
    int num, divisor;

    printf("Enter the number: ");
    scanf("%d", &num);

    printf("Enter the divisor: ");
    scanf("%d", &divisor);

    if (divisor == 0) {
        printf("Error: Division by zero is not allowed.\n");
    } else if (num % divisor == 0) {
        printf("%d is divisible by %d.\n", num, divisor);
    } else {
        printf("%d is NOT divisible by %d.\n", num, divisor);
    }

    return 0;
}
