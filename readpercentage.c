/*
1.write program to read percentage of marks and to display appropriate message.
*/
#include<stdio.h>
void main()
{
    float perc;
    printf("Enter your percentage of marks:\n");
    scanf("%f",&perc);
    if(perc>=0 && perc<=29)
    {
        printf("you are fail in exam");
    }
    else if(perc>=30 && perc <=70)
    {
        printf("you are a good student");
        
    }
    else if(perc>=70 && perc<=99)
    {
        printf("you achhieve best marks in your exam");
    }   
    else if(perc==100){
    printf("you are a genius student & also the topper of this year");
    }
    else
    printf("your are entering wrong percentage of marks");
}
/*
OUTPUT:
Enter your percentage of marks:
34
you are a good student
*/
