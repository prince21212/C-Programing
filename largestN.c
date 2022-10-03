/*
1.write a c program to find the largest number among three numbers.
*/

#include<stdio.h>
void main()
{
    int a,b,c;
    printf("enter the number\n");
    scanf("%d%d%d",&a,&b,&c);
    printf("finding the biggest number\n");
    if(a>=b && a>=c)
    {
        printf("a is the biggest number");
        
    }
    else if(b>=a && b>=c)
    {
        printf("b is the largest number\n");
    }
    else if(c>=a && c>=b)
    {
        printf("c is the biggest number");
    }
}
