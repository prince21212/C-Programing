/*
1.The #define directive.
2.The #define pre processor directive can be used to globally replace a word with number.
*/

#include <stdio.h>
#define PI 3.14
#define SQUARE(r) r *r
int main()
{
    float var = PI;
    int r = 4;
    printf("The value of PI is %f\n", var);
    printf("The area of circle is %f\n", var * SQUARE(r));
    return 0;
}
/*
OUTPUT :
The value of PI is 3.140000
The area of circle is 50.240002
*/