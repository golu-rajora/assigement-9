// Write a program which takes the day number of a week and displays a unique greeting message for the day.
#include<stdio.h>
int main()
{
    printf(" unique greeting message for the day:-\n");
    printf("given menu:-\n");
    printf("1- Monday\n");
    printf("2- Tuesday\n");
    printf("3- Webnesday\n");
    printf("4- Thrusday\n");
    printf("5- Friday\n");
    printf("6- Saturday\n");
    printf("7- Sunday\n");
    printf("select the one day:-");
    int x;
    scanf("%d",&x);
    switch(x)
    {
       case 1:
        printf("good day");
        break;
        case 2:
        printf("nice day");
        break;
        case 3:
        printf("a very good  day");
        break;
        case 4:
        printf("gandi jaynti ");
        break;
        case 5:
        printf("guru nanak jayati");
        break;
        case 6:
        printf("A half work day");
        break;
        case 7:
        printf("Holiday");
        break;
        default :
        printf("invalid select day");
    }
    getch();
    return 0;
}
