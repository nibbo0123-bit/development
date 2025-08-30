#include <stdio.h>
int main() {
    int a, b, c, d, result;
    printf("Enter value of a: ");
    scanf("%d", &a);

    printf("Enter value of b: ");
    scanf("%d", &b);

    printf("Enter value of c: ");
    scanf("%d", &c);

    printf("Enter value of d: ");
    scanf("%d", &d);

    result = (a + b) * (c - d);
    printf("Result of (a + b) * (c - d) = %d\n", result);

    return 0;
}
