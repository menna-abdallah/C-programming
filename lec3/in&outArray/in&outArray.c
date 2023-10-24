#include <stdio.h>
#include <stdlib.h>
#define max_size 50


int main()
{
    int arr[max_size];
    int size=0,i=0;

    printf("select the array size:");
    scanf("%d",&size);

    for(i=1; i<=size;i++)
    {
        printf("Enter num %d: ", i);
        scanf("%d",&arr[i]);
    }

    printf("\n");

    for(i=1; i<=size;i++)
    {
        printf("%d \n",arr[i]);
    }
    return 0;
}
