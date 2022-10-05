#include <stdio.h>
int main ()
{
  int n;
  printf ("enter the number till to print fibonacci series\n");
  scanf ("%d", &n);

  int a, b, c;
  b = 1;
  c = 0;
  if (n == 0)
    {
      printf ("%d", c);
    }
  else if (n == 1 || n == 2)
    {
      printf ("%d", b);
    }
 printf("fibonacci series :%d,%d,",c,b);
  for (int i = 2; i <= n; i++)
    {
      a = b + c;
      c = b;
      b = a;
     
      printf ("%d,", b + c);
      
    }
  return 0;
}
