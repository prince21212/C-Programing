/*
1.Print a multiplication table using loop concept from take input to user.
Q.Print multiplication table of a number entered by the user in pretty form.
*/

#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number you want multiplication table of :\n");
    scanf("%d", &n);
    printf("************ Multiplication table of %d is: ************\n", n);
    int i = 1;
    while (i <= 10)

    {
        printf("%d x %d = %d\n", n, i, n * i);
        i++;
    }
    /*
     We can also go through for loop:
      for (int i = 1; i <= n; i++)
      {
            printf("%d x %d = %d\n", n, i, n * i);
      }
      */
}
/*
OUTPUT:
Enter the number you want multiplication table of :
12
************ Multiplication table of 12 is: ************
12 x 1 = 12
12 x 2 = 24
12 x 3 = 36
12 x 4 = 48
12 x 5 = 60
12 x 6 = 72
12 x 7 = 84
12 x 8 = 96
12 x 9 = 108
12 x 10 = 120
*/                                                                                                                                     