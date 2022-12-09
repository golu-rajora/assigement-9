//Write a menu driven program with the following options:
//a. Check whether a given set of three numbers are lengths of an isosceles triangle or not
//b. Check whether a given set of three numbers are lengths of sides of a right angled triangle or not
//c. Check whether a given set of three numbers are equilateral triangle or not
//d. Exit
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("given menu\n");
    printf("1-Check whether a given set of three numbers are lengths of an isosceles triangle or not\n");
    printf("2-Check whether a given set of three numbers are lengths of sides of a right angled triangle or not\n");
    printf("3-Check whether a given set of three numbers are equilateral triangle or not\n");
    printf("4- Exit");
    printf("\n select a one option:-");
    int x;
    scanf("%d",&x);
    switch(x)
    {
          case 1:
            printf("enter the three numbers:-");
            scanf("%d %d %d",&a,&b,&c);
            switch(a==b)
            {
            case 1:
                printf("\n it is isosceles triangle ");
                break;
            case 0:
            switch(b==c)
                {
            case 1:
            printf("\n it is isosceles triangle ");
            break;
            case 0:
            switch(c==a)
                    {
            case 1:
            printf("\n it is  isosceles triangle ");
            break;
            case 0:
            printf("\n it is not isosceles  triangle ");
            break;
                    }
                }
            }
            case 3:
                printf("enter the three numbers:-");
            scanf("%d %d %d",&a,&b,&c);
            switch(a==b==c)
            {
            case 1:
                printf("\n it is equilateral triangle ");
                break;
            case 0:
                 printf("\n it is not equilateral triangle ");
                 break;

            }
            case 2:
                  printf("enter the three numbers:-");
                scanf("%d %d %d",&a,&b,&c);
                switch(b*b==a*a+c*c)
                {
                case 1:
                    printf("it is right angled triangle ");
                    break;
                case 0:
                    printf("it is not right angled triangle ");
                    break;
                }
                case 4:
                    printf("EXIT");
                    break;

     }
    getch();
    return 0;
}
