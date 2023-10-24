#include <stdio.h>
#define max_size 50
int main()
{
    int i=0, max, min, size=0;
    int arr[max_size];

    printf("select the array size:");
    scanf("%d", &size);

    for(i=0; i<size; i++)
    {
         printf("Enter num %d: ", i+1);
        scanf("%d", &arr[i]);
    }
    max = arr[0];
    min = arr[0];
    for(i=1; i<size; i++)
    {
        if(arr[i] > max)
        {
            max = arr[i];
        }
    }
        for(i=1; i<size; i++)
    {

        if(arr[i] < min)
        {
            min = arr[i];
        }
    }
    printf("Maximum num = %d\n", max);
    printf("Minimum num = %d", min);

    return 0;

}
