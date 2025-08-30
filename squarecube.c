#include <stdio.h>
int square(int num) {
    return num * num;
}
int cube(int num) {
    return num * num * num;
}
int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Square of %d = %d\n", n, square(n));
    printf("Cube of %d = %d\n", n, cube(n));
    return 0;
}

    