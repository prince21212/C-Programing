#include <stdio.h>
void main()
{
    int a, b, divide;
    printf("enter the number\n");
    scanf("%d%d", &a, &b);
    divide = a/b;
    printf("division of %d / %d = %d", a, b, divide);
}