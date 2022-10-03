/******************************************************************************
1.find the area,circumference and diameter of a circle using macros.
*******************************************************************************/
#include <stdio.h>

#define DIAMETER 2*r
#define PI 3.14
void
main ()
{
  float r;
  float circumference, area, diameter;
  printf ("enter the radius of circle\n");
  scanf ("%f", &r);
  circumference = 2 * PI * r;
  printf ("circumference of the circle = %f\n", circumference);
  area = PI * r * r;
  printf ("AREA of the circle = %f\n", area);

  printf ("Diameter of the circle = %f\n", DIAMETER);
}
