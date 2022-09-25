/*
1.find the nth value of fibonacci series.
2.fibonacci series :- 0,1,1,2,3,5,8,13 ........n.
3.write a c program to find the nth value of fibonacci series.
4.using recursive approach and itterative approach.
*/

#include <stdio.h>
long double fib(long double n)
{
        /*
        //recursive approach
    if(n==0)
        {
        return 0;
        }
    else if(n==1||n==2)
        {
        return 1;
        }
    else
        {
        return fib(n-1)+fib(n-2);
        }
        */
            
        //itterative approach
    int a,b,c;
            
    b=1;
    c=0;
    if(n==0)
        {
         return c;
        }
    if(n==1)
        {
        return b;
        }
    for(int i=2;i<=n;i++)
        {
    a=b+c;
    c=b;
    b=a;
                
        }
        return a;
                
}
            

long double main()
{
    long double a;
    printf("Enter the nth number\n");
    scanf("%Lf",&a);
    printf("the nth value of %Lf is %Lf",a,fib(a));

    return 0;
}
/*
OUTPUT ;
Enter the nth number
30
the nth value of 30.000000 is 832040.000000
*/

