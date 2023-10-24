#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;

    printf("Enter a number: \n");
    scanf("%d",&x);

    if (x>0)
        printf("positive");
    else if (x<0)
        printf("nigative");
    else
        printf("zero");
    return 0;
}
