#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1, num2, num3;

    printf("Enter 3 numbers: ");
    scanf("%d %d %d",&num1, &num2, &num3);

    if (num1 > num2 ){
        if (num1 > num3)
             printf("The largest num is %d", num1);
        else
             printf("The largest num is %d", num3);
    }

    else if (num2 > num3)
        printf("The largest num is %d", num2);
    else
        printf("The largest num is %d", num3);
    return 0;
}
