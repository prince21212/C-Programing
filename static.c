/*
STATIC VARIABLE IN C :
1.A static varible is known to retain the value even after they exit the scope.
2.static variable can defined inside or outside the function.
3.the keyword "static"is used to declare the static variable.
4.Write a program using static variable in c program.
*/

#include <stdio.h>
#include <string.h>
int func()
{
    static int a = 2;
    a++;
    return a;
}

void main()
{
    int a;
    a = func();
    printf("%d\n", a);
    a = func();
    printf("%d\n", a);
    a = func();
    printf("%d\n", a);
    // here how many time we call the func() and print the a the output is incrementing each time 1.
}
/*
OUTPUT: 
3
4
5
*/