/*
0.structure :
1.structure are used to create user defined data types.
2.its usually used to store dissimilar data together.
QUESTION:
3.Write a program using loop in structure?
SOLUTION :-
*/

#include <stdio.h>
#include <stdio.h>
typedef struct
{
    char name[55];
    int dl;
    char date[20];
    char route[80];
    float kms;
} details;
int main()
{
    int n = 3;
    details details[n];
    printf("Enter driver details  \n  \n");
    for (int i = 0; i < n; i++)
    {
        printf("driver:%d \n \n", i + 1);

        printf("NAME :");
        scanf("\n%[^\n]s", &details[i].name);

        printf("ROUTE :");
        scanf("\n%[^\n]s", &details[i].route);

        printf("D.L.NO :");
        scanf("%d", &details[i].dl);

        printf("D.O.B :");
        scanf("\n%[^\n]s", &details[i].date);

        printf("DISTANCE :");
        scanf("%f", &details[i].kms);
        printf("\n");
    }

    printf("---------------DEATAILS OF DRIVERS---------------\n");
    for (int i = 0; i < n; i++)
    {
        printf("DRIVER:%d\n \n", i+1);

        printf("NAME\t:%s\n", details[i].name);

        printf("ROUTE\t:%s\n", details[i].route);

        printf("D.L.NO\t:%d\n", details[i].dl);

        printf("D.O.B\t:%s\n", details[i].date);

        printf("DISTANCE:%f KMS\n", details[i].kms);

        printf("\n");
    }
    return 0;
}
/*Enter driver details  

driver:1 

NAME :SONU KUMAR
ROUTE :PATNA TO PUNJAB
D.L.NO :012457884
D.O.B :05/08/1998
DISTANCE :520

driver:2 

NAME :RAMESH MISHRA
ROUTE :PUNJAB TO HARYANA
D.L.NO :012457848
D.O.B :24/04/2004
DISTANCE :240

driver:3 

NAME :PIYUSH KUMAR
ROUTE :HARYANA TO LUCKNOW
D.L.NO :0123568995
D.O.B :12/06/2003
DISTANCE :540

---------------DEATAILS OF DRIVERS---------------
DRIVER:1

NAME    :SONU KUMAR
ROUTE   :PATNA TO PUNJAB
D.L.NO  :12457884
D.O.B   :05/08/1998
DISTANCE:520.000000 KMS

DRIVER:2

NAME    :RAMESH MISHRA
ROUTE   :PUNJAB TO HARYANA
D.L.NO  :12457848
D.O.B   :24/04/2004
DISTANCE:240.000000 KMS

DRIVER:3

NAME    :PIYUSH KUMAR
ROUTE   :HARYANA TO LUCKNOW
D.L.NO  :123568995
D.O.B   :12/06/2003
DISTANCE:540.000000 KMS
*/