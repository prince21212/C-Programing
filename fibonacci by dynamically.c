/*
1.Those who don't learn from their past they have to re-work/regret in future.
2.solving the fibonacci problem by dynammic programming.
3.finding the nth value of fibonacci series.
*/
#include<stdio.h>
int fib(int n)
{
  //dynammic approach
  // The time complexity of the below code is T(N), i.e., linear. We have to find the sum of two terms, and it is repeated n times depending on the value of n.
  int arr[n],i,flag=0;
  arr[0]=0;
  arr[1]=1;
  for(i=2;i<=n;++i)
  {
      arr[i]=arr[i-1]+arr[i-2];
      flag=arr[i];
  }
  return flag;
  // general or recursive approach
  // The time complexity of the below code approach is T(2^N), i.e., exponential.
// if(n==0 || n==1)
// {
//     return n;
// }
// else
// return (fib(n-1)+fib(n-2));
}
int main()
{
    int n;
    scanf("%d",&n);
    fib(n);
    printf("%d", fib(n));
    return 0;
}
