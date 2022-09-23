#include <stdio.h>

int main()
{

    int i;
    float b;
    while (5)
    {
        printf("1.kmsTomiles\n2.inchesTofoot\n3.cmsToinches\n4.poundTokgs\n5.inchesTometers\n");
        printf("press the number you want use\n");
        scanf("%d", &i);

        switch (i)
        {

        case 0:
            printf("Quitting the program...");

            goto end;
            break;
        case 1:
            printf("*******************Kms To Miles*******************\n");
            printf("Enter the value which you want to convert\n");
            scanf("%f", &b);
            printf("%d kms = %f miles\n", (int)b, b * 0.621371);

            break;
        case 2:
            printf("*******************Inches To Foot*******************\n");
            printf("Enter the value which you want to convert\n");
            scanf("%f", &b);
            printf("%d inches = %f foots\n", (int)b, b * 0.0833333);

            break;
        case 3:
            printf("*******************Cms To Inches*******************\n");
            printf("Enter the value which you want to convert\n");
            scanf("%f", &b);
            printf("%d cms = %f foots\n", (int)b, b * 0.0833333);

            break;
        case 4:
            printf("*******************Pound To Kgs*******************\n");
            printf("Enter the value which you want to convert\n");
            scanf("%f", &b);
            printf("%d pound = %f kgs\n", (int)b, b * 0.453592);

            break;
        case 5:
            printf("*******************Inches To Meters*******************\n");
            printf("Enter the value which you want to convert\n");
            scanf("%f", &b);
            printf("%d inches = %f meters\n", (int)b, b * 0.0254);

        default:
            printf("quit");
        }
    }
    end:
    return 0;
}
/*
OUTPUT:
0.quiting program
1.kmsTomiles     
2.inchesTofoot   
3.cmsToinches    
4.poundTokgs     
5.inchesTometers 
press the number you want use
2
*******************Inches To Foot*******************
Enter the value which you want to convert
3
3 inches = 0.250000 foots    
0.quiting program
1.kmsTomiles
2.inchesTofoot
3.cmsToinches
4.poundTokgs
5.inchesTometers
press the number you want use
0
Quitting the program...
*/

 
