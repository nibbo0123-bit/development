#include <stdio.h>

int main() {
    double num1, num2;
    char op;

    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &op);  // Notice the space before %c to ignore newline

    printf("Enter two numbers: ");
    scanf("%lf %lf", &num1, &num2);  // Correct specifier for double

    if (op == '+') {
        printf("Result: %.2f\n", num1 + num2);
    } else if (op == '-') {
        printf("Result: %.2f\n", num1 - num2);
    } else if (op == '*') {
        printf("Result: %.2f\n", num1 * num2);
    } else if (op == '/') {
        if (num2 != 0)
            printf("Result: %.2f\n", num1 / num2);
        else
            printf("Error: Division by zero!\n");
    } else {
        printf("Invalid operator!\n");
    }

    return 0;
}
