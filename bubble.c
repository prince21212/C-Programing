#include<stdio.h>
void bubble_sort(int arr[],int n)
{
    int i,j,swap;
     for(i=0;i<n-1;i++)
     {
         for(j=0;j<n-i-1;++j)
         {
             if(arr[j]>arr[j+1])
             {
                 swap = arr[j];
                 arr[j]=arr[j+1];
                 arr[j+1]=swap;
             }
         }
     }
     for(i=0;i<n;i++)
     {
         printf("%d ",arr[i]);
     }
}
int main()
{
    int n,i=0;
    printf("array size\n");
    scanf("%d",&n);
    int arr[n];
    printf("enter the elemets of array\n");
    while(i<n)
    {
        scanf("%d",&arr[i]);
        i++;
    }
    bubble_sort(arr,n);
    return 0;
}
