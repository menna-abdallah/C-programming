#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1;
    int num2;
    int op;

    printf("Enter num 1: ");
    scanf("%d",&num1);
    printf("Enter num 2: ");
    scanf("%d",&num2);
    printf("Chose the operation: \n 1- adition \n 2- substract \n 3- mutliplication \n 4- division \n");
    scanf("%d",&op);


    switch (op){
    case 1 :
        printf ("%d", num1+num2);
    break;
    case 2 :
        printf ("%d", num1-num2);
    break;
    case 3 :
        printf ("%d", num1*num2);
    break;
    case 4 :
        printf ("%f", (float)num1/num2);
    default:
        break;
    }




    return 0;
}
