/*
0.In union the last members handled only by union .
1.Union is a user defined data type in c programming.
2.In union members can uses a single shared memory location  at once.
3.We use keyword union to define a union.
4.we use dot(.)operator to access the members of a union.
5.Write a program to union about a student details?
*/



#include <stdio.h>
#include <string.h>
union student
{
    int id;
    char name[20];
    float marks;
    char clg[20];
};

void main()
{
    union student s1;
    strcpy(s1.name, "prince kumar");
    s1.marks = 55;
    s1.id = 21212;
    strcpy(s1.clg, "SAMS");

    printf(" Id of the stduent : %d\n", s1.id);
    printf(" Name of the stduent : %s\n", s1.name);
    printf(" Marks of the stduent : %f\n", s1.marks);
    printf(" college of the stduent : %s\n", s1.clg);
}
/*
OUTPUT:
 Id of the stduent : 1397571923
 Name of the stduent : SAMS
 Marks of the stduent : 881564254208.000000
 college of the stduent : SAMS
 */
