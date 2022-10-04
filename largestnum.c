/*
1.FINDING LARGEST NUMBER USING FUNCTION .
*/
#include <stdio.h>
 int isBiggest(int a,int b,int c)
 {
     if (a>=b && a>=c)
     {
         return a;
     }
     else if(b>=a && b>=c)
     {
         return b;
     }
     else if(c>=a && c>=b)
     {
         return c;
     }
 }

int main()
{
    int a,b,c;
    printf("enter the number\n");
    scanf("%d%d%d",&a,&b,&c);
    int isBiggest(int a,int b,int c);
    int ans = isBiggest(a,b,c);
    printf("*******LARGEST NUMBER*******\n");
    printf("%d is the largest number\n",ans);

    return 0;
}
/*
OUTPUT :
3
5
4
*******LARGEST NUMBER*******
5 is the biggest number
*/

