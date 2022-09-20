#include <stdio.h>
void main()
{
    int a, b, modulus;
    printf("enter the number\n");
    scanf("%d%d", &a, &b);
    modulus = a % b;
    printf("modulus of %d %% %d = %d", a, b, modulus);
}