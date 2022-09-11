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