#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1;
    int num2;
    char op;

    printf("Enter num 1: ");
    scanf("%d",&num1);
    printf("Enter num 2: ");
    scanf("%d",&num2);
    printf("Enter the operator");
    scanf(" %c",&op);


    switch (op){
    case '+' :
        printf ("%d", num1+num2);
    break;
    case '-' :
        printf ("%d", num1-num2);
    break;
    case '*' :
        printf ("%d", num1*num2);
    break;
    case '/' :
       if (num2 == 0)
          printf("undifined");
       else
            printf ("%f", (float)num1/num2);
        break;
    default:
        break;
    }
    return 0;
}
