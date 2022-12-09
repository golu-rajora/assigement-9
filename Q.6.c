// Program to check whether a year is a leap year or not. Using switch statement
#include<stdio.h>
int main()
{
    printf("leap year or not:-\n");
    printf("enter a year:-");
    int x;
    scanf("%d",&x);
    switch(x%4==0)
    {
    case 1:
        printf("%d year is leap year",x);
        break;
    case 0:
        printf("%d year is not leap year",x);
    }
    getch();
    return 0;
}
