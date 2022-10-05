/*
1.sum of elements in arrays.
*/
#include<stdio.h>
int main()
{
   
  int arr[]={1,2,4,3};
    int sum=0;
  int length=sizeof(arr)/sizeof(arr[0]);
for( int i = 0;i<length;i++)
{
    sum =sum+arr[i];
   
}
printf("sum of the arrays elements is %d",sum);
    return 0;
    
}
/*
OUTPUT:
sum of the arrays elements is 10
*/
