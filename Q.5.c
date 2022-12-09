//5. Convert the following if-else-if construct into switch case:
//if(var == 1) printf("good");
//else if(var == 2) printf("better");
//else if(var == 3) printf("best");
//else printf("invalid");
#include<stdio.h>
int main()
{
    printf("menu:-\n");
    printf("1-good\n");
    printf("2-better\n");
    printf("3-best\n");
    printf("4-invalid\n");
    printf("select a one option:-");
    int var;
    scanf("%d",&var);
    switch(var==1)
    {
    case 1:
        printf("good");
        break;
    case 0:
        switch(var==2)
        {
        case 1:
            printf("better");
            break;
        case 0:
            switch(var==3)
            {
            case 1:
                printf("best");
                break;
            case 0:
                printf("invalid");
            }
        }
    }
    getch();
    return 0;
}
