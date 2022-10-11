/*
1.write a c program to find simple interest  to take input from user.
*/
#include <stdio.h>
#include <conio.h>
#define SI p *r *t / 100

void main()
{
    int p, r, t;
    /*
    p = Principal Amount
    r = Rate of interest
    t = Number of years
    */
    printf("enter the principal ,interest rate & time\n",&p,&r,&t);
    scanf("%d%d%d", &p, &r, &t);
    printf("Simeple interest = %d", SI);
    getchar();
}
/*
OUTPUT :
1200
5
12
Simeple interest = 720
*/