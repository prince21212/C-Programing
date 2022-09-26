/*
1.Printing star pattern with reverse star pattern.
2.write a c program to print star patternn with using loop.
*/
#include <stdio.h>
void starpattern(int rows)
{
  printf("--------Star Pattern--------\n");
  for (int i = 0; i < rows; i++)
  {
    for (int j = 0; j <= i; j++)
    {
      printf("*");
    }
    printf("\n");
  }
}
void reversestarpattern(int rows)
{
  printf("--------Reverse Star Pattern--------\n");
  for (int i = 0; i < rows; i++)
  {
    for (int j = 0; j < rows - i; j++)
    {
      printf("*");
    }
    printf("\n");
  }
}
int main()
{
  int rows, type;
  printf("0.star pattern \n1.Reverse star pattern\n");
  scanf("%d", &type);
  printf("Enter the number of rows\n");
  scanf("%d", &rows);
  switch (type)
  {
  case 0:
    starpattern(rows);
    break;
  case 1:
    reversestarpattern(rows);
    break;
  default:
    printf("the number is invalid");
    break;
    return 0;
  }

  return 0;
}
/*
OUTPUT :
0.star pattern
1.Reverse star pattern
0
Enter the number of rows
5
--------Star Pattern--------
*
**
***
****
*****
-----------000000------------
0.star pattern        
1.Reverse star pattern
1
Enter the number of rows
5
--------Reverse Star Pattern--------
*****
****
***
**
*
*/