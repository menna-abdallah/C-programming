#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;

    printf("Enter a number: \n");
    scanf("%d",&x);

    if (x%2==0)
        printf("even");
    else
        printf("odd");
    return 0;
}
