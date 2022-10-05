/*
1.write a program using C programming language to find the square of users number.
*/
#include<stdio.h>
#define SQUARE num*num
void main()
{
    int num;
    printf("-------Enter 0 for exit the program-------- :\nEnter the number you to square of :\n");
    scanf("%d",&num);
    while(num !=0){
    printf("Square of %d =%d\n",num,SQUARE);
    scanf("%d",&num);
    }
    printf("********You Are Exited The Program********");
}
/*
OUTPUT:
-------Enter 0 for exit the program-------- :
Enter the number you to square of :
2
Square of 2 =4
0
********You Are Exited The Program********
*/
