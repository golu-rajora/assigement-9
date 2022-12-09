// C program to find all roots of a quadratic equation using switch case
#include<stdio.h>
int main()
{
    printf(" find all roots of a quadratic equation:-");
    int a,b,c,d;
    printf("\n enter the value of a,b and c of the quadratic equation:-");
    scanf("%d %d %d",&a,&b,&c);
    d=b*b-4*a*c;
    switch(d>=0)
    {
    case 1:
        printf("is the real roots");
        break;
    case 0:
        printf("is the imaginary roots");
    }
    getch();
    return 0;
}
