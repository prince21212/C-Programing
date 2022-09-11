/*
1.Structure are used to create user defined data types in C.
2.It's usually used when we want to store dissimilar data together.
3.The keyword 'struct' should be used to define variables of structure type.
4.Dot(.)is called as structure member operator.
5.Write a program to using structure about details of a student ?
*/

#include <stdio.h>
#include <string.h>
struct student
{
    int id;
    char name[20];
    float marks;
    char clg[20];
};

void main()
{
    struct student s1;
    strcpy(s1.name, "prince kumar");
    s1.marks = 55;
    s1.id = 21212;
    strcpy(s1.clg, "SAMS bangluru");

    printf(" Id of the stduent : %d\n", s1.id);
    printf(" Name of the stduent : %s\n", s1.name);
    printf(" Marks of the stduent : %f\n", s1.marks);
    printf(" college of the stduent : %s\n", s1.clg);
}
/*
OUTPUT
Id of the stduent : 21212
 Name of the stduent : prince kumar
 Marks of the stduent : 55.000000
 college of the stduent : SAMS bangluru
*/
