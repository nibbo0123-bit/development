#include<stdio.h>
int main(){
    int a;
    printf("enter an integer");
    scanf("%d",&a);
    if (a>0){printf("%d is positive",a);}
    else if (a<0){printf("%d is negative",a);}
    else {printf("%d is zero",a);}
}