//Program to take the value from the user as input electricity unit charges and calculate total electricity bill according to the given condition . Using the switch statement.
// For the first 50 units Rs. 0.50/unit
// For the next 100 units Rs. 0.75/unit
//For the next 100 units Rs. 1.20/unit
// For units above 250 Rs. 1.50/unit
// An additional surcharge of 20% is added to the bill.
#include<stdio.h>
int main()
{
    printf("enter the unit of the electricity:-");
    float x,y;
    scanf("%f",&x);
    switch(x<=50)
    {
    case 1:
        printf("total electricity bill is =%.2f",x*0.50);
        y=x*0.50*20/100;
        printf("\n other charge  20%% of is= %2.f",y);
        printf("\n and total bill is=%2.f",y+x*0.50);
        break;
    case 0:
        switch(x<=150)
        {
        case 1:
             printf("total electricity bill is =%.2f",x*0.75);
              y=x*0.75*20/100;
             printf("\n other charge  20%% of is= %2.f",y);
             printf("\n and total bill is=%2.f",y+x*0.75);
             break;
        case 0:
            switch(x<=250)
            {
            case 1:
                 printf("total electricity bill is =%.2f", x*1.20);
                  y=x*1.20*20/100;
                 printf("\n other charge  20%% of is= %2.f",y);
                printf("\n and total bill is=%2.f",y+x*1.20);
                 break;
            case 0:
                switch(x>=250)
                {
                case 1:
                     printf("total electricity bill is =%.2f", x*1.50);
                      y=x*1.50*20/100;
                      printf("\n other charge  20%% of is= %2.f",y);
                     printf("\n and total bill is=%2.f",y+x*1.50);
                     break;
                }
            }

        }
    }
    getch();
    return 0;
}
