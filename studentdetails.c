#include <stdio.h>

int main() {
    char name[50];  
    int age;
    float percentage;
    printf("Enter name: ");
    scanf("%s", name);   
    printf("Enter age: ");
    scanf("%d", &age);
    printf("Enter percentage: ");
    scanf("%f", &percentage);
    printf("\n--- Student Details ---\n");
    printf("Name       : %s\n", name);
    printf("Age        : %d\n", age);
    printf("Percentage : %.2f%%\n", percentage);
    return 0;
}
