//Program to Convert even number into its upper nearest odd number Switch Statement.
#include<stdio.h>
int main()
{
    printf(" Convert even number into its upper nearest odd number\n");
    printf("enter a number:-");
    int x;
    scanf("%d",&x);
    switch(x%2==0)
    {
    case 1:
        printf("upper nearest odd number is=%d",x+1);
        break;
    case 0:
        printf("not even number");
    }
    getch();
    return 0;
}
