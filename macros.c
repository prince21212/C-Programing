/*
TOPIC : PREDEFINED MACROS IN C :-
1.__DATE__ :- THE CURRENT DATE AS CHARACTER LITERAL"MMM DD YYYY".
2.__TIME__ :- THIS CONTAINS THE CURRENT TIME AS A CHARACTER LITERAL IN "HH:MM:SS"FORMAT.
3.__FILE__ :- THE CURRENT FILE NAME STRING LITERAL.
4.__LINE__ :- THE CURRENT LINE NUMBER AS A DECIMAL CONSTANT.
5.__STDC__ :- DEFINED AS 1(ONE) WHEN THE COMPILER COMPILES WITH THE ANSI STANDARD.
Q.WRITE A PROGRAM IN C USING MACROS ?
*/


#include <stdio.h>
#include <stdlib.h>
void main()
{
    printf("My file name is %s\n",__FILE__);
    printf("Today's date is %s\n",__DATE__);
    printf("Now time is %s\n",__TIME__);
    printf("This line is %d\n",__LINE__);
    printf("ANSI is used  %d\n",__STDC__);
}
/*
OUTPUT :-
My file name is macros.c
Today's date is Sep 21 2022
Now time is 22:42:03       
This line is 19
ANSI is used  1
*/
