/*
1.write a program to add positive integers & enter 999 to quit the program.
*/
include <stdio.h>
void main()
{
    int num;
    int sum =0;
    printf("enter the positive numbers(enter 999 to quit)\n");
    scanf("%d",&num);
    while(num != 999)
    {
        sum =sum + num;
         scanf("%d",&num);
    }
    printf("\n sum of all the positive integer =%d\n",sum);
}
/*
OUTPUT:
enter the positive numbers(enter 999 to quit)
11
22
999
sum of all the positive integer =33
