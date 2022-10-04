/*
1.FINDING SMALLEST NUMBER USING FUNCTION .
*/
#include <stdio.h>
 int isSmallest(int a,int b,int c)
 {
     if (a<=b && a<=c)
     {
         return a;
     }
     else if(b<=a && b<=c)
     {
         return b;
     }
     else if(c<=a && c<=b)
     {
         return c;
     }
 }

int main()
{
    int a,b,c;
    printf("enter the number\n");
    scanf("%d%d%d",&a,&b,&c);
    int isSmallest(int a,int b,int c);
    int ans = isSmallest(a,b,c);
    printf("*******SMALLEST NUMBER*******\n");
    printf("%d is the smallest number\n",ans);

    return 0;
}
/*
OUTPUT :
3
5
4
*******SMALLEST NUMBER*******
3 is the smallest number
*/

