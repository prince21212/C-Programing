/*
-> check the largest of three number to take input from user.
-> write a c program using funcion to find the largest of three numbers by taking input from user.
*/
#include<stdio.h>
int largest_is(int a,int b,int c)
{
    int big=0;
    if(a>b&&a>c)
    {
        big=a;
        return big;
    }
    else if(b>a && b>c)
    {
        big=b;
        return big;
    }
    else if(c>a && c>b)
    {
        big =c;
        return big;
    }
}
int main()
{
    int a,b,c,ans;
    printf("enter three numbers to chek the largest one\n");
    scanf("%d%d%d",&a,&b,&c);
    largest_is(a,b,c);
    ans=largest_is(a,b,c);
    printf("%d is the largest number",ans);
    return 0;
}
/*
********OUTPUT*******
enter three numbers to check the largest one
23
45
12
45 is the largest number 
*/
