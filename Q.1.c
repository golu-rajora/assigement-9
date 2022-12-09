//Write a program which takes the month number as an input and display number of days in that month
#include<stdio.h>
int main()
{
    int x;
    printf("1- January     2-Fabruary\n");
    printf("3- March       4-April\n");
    printf("5- May         6-June\n");
    printf("7- July        8-August\n");
    printf("9- September   10-October\n");
    printf("11- November   12-December\n");
    printf("which takes the month number:-");
    scanf("%d",&x);
    switch(x)
    {
        case 1:
        printf("this month in 31 days");
        break;
        case 2:
        printf("this month in 28 days");
        break;
        case 3:
        printf("this month in 31 days");
        break;
        case 4:
        printf("this month in 30 days");
        break;
        case 5:
        printf("this month in 31 days");
        break;
        case 6:
        printf("this month in 30 days");
        break;
        case 7:
        printf("this month in 31 days");
        break;
        case 8:
        printf("this month in 31 days");
        break;
        case 9:
        printf("this month in 30 days");
        break;
        case 10:
        printf("this month in 31 days");
        break;
        case 11:
        printf("this month in 30 days");
        break;
        case 12:
        printf("this month in 31 days");
        break;
        default :
        printf("invaild number");
    }
    getch();
    return 0;


}
