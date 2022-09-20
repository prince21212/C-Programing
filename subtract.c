#include <stdio.h>
void main()
{
    int a, b, subtract;
    printf("enter the number\n");
    scanf("%d%d", &a, &b);
    subtract = a - b;
    printf("Subtraction of %d - %d = %d", a, b, subtract);
}