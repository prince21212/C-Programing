#include <stdio.h>
void main()
{
    int a, b, multiply;
    printf("enter the number\n");
    scanf("%d%d", &a, &b);
    multiply = a * b;
    printf("Multiplication of %d x %d = %d", a, b, multiply);
}