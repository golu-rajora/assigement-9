//Program to convert a positive number into a negative number and negative number into a positive number using a switch statement
#include<stdio.h>
int main()
{
    printf(" convert a positive number into a negative number and negative number into a positive number:-");
    int x;
    printf("\n enter a number:-");
    scanf("%d",&x);
    switch(x>0)
    {
    case 1:
        printf("%d is positive number convert negative number is = %d",x,-x-x+x);
        break;
    case 0:
         printf("%d is negative number convert positive number is = %d",x,-(x-x+x));
    }
    getch();
    return 0;
}
