/*
1.cheking the number is prime or not using function in c programming language.
2.Prime numbers are numbers that have only 2 factors: 1 and themselves. For example, the first 5 prime numbers are 2, 3, 5, 7, and 11.
3.By contrast, numbers with more than 2 factors are call composite numbers.
*/
#include <stdio.h>
int isPrime(int n)
{
    for(int i = 2;i < n; i++)
    {
     if(n%i==0)
     
         return 0;
    }
    
      return 1;  
    
}
void main()
{
    int n,ans;
    printf("Enter the number\n");
    scanf("%d",&n);
    
    ans=isPrime(n);
    if(ans==1)
    {
         printf(" %d is prime number",n);
    }
    else
    {
    printf(" %d is not prime number",n);
    }
  /*
  OUTPUT :
  Enter the number
  5
  5 is prime number
  */
