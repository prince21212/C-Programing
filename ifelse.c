/*
0.IF AND ELSE STATEMENT :
1.The if/else statement executes a block of code if a specified condition is true.
2.If the condition is false, another block of code can be executed.
3.Write a program using if else statement.
*/

#include <stdio.h>
int main()
{
   int marks;
   printf("enter your marks\n");
   scanf("%d", &marks);
   printf("you have entered %d as your marks \n ", marks);

   if (marks >= 95)
   {
      printf("you are eligible for admission and also for trophy gift by our university!");
   }
   else if (marks > 90)
   {
      printf("you are eligible for admission and also for a medal gift by our university");
   }
   else
   {
      printf("you are not eligible for admission and any types of gifts by our university");
   }
   return 0;
}
/*
OUTPUT :
//Execute when satisfied condition is true.
enter your marks 
96
you have entered 96 as your marks.
you are eligible for admission and also for trophy gift by our university!
//the condition is false, and else block of code can be executed.
enter your marks
25
you have entered 25 as your marks 
you are not eligible for admission and any types of gifts by our university!
*/
