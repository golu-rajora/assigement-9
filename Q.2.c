//2. Write a menu driven program with the following options:
//a. Addition b. Subtraction c. Multiplication d. Division e. Exit
#include<stdio.h>
int main()
{
       int x,y;
    printf("given menu:-\n");
    printf("1. Addition        2. Subtraction \n");
    printf("3. Multiplication   4. Division \n");
    printf("5. Exit\n");
    printf("select the one option:-");
    int z;
    scanf("%d",&z);
    switch(z)
    {
      case 1:
        printf("enter the two number:-");
        scanf("%d %d",&x,&y);
        printf("%d and %d are addition is %d",x,y,x+y);
        break;
        case 2:
        printf("enter the two number:-");
        scanf("%d %d",&x,&y);
        printf("%d and %d are subtraction is %d",x,y,x-y);
        break;
        case 3:
        printf("enter the two number:-");
        scanf("%d %d",&x,&y);
        printf("%d and %d are Multiplication is %d",x,y,x*y);
        break;
        case 4:
        printf("enter the two number:-");
        scanf("%d %d",&x,&y);
        printf("%d and %d are Division is %d",x,y,x/y);
        break;
        case 5:
            printf("invalid option");

    }
    getch();
    return 0;
}
