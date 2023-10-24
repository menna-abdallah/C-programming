#include <stdio.h>
#include <stdlib.h>
#define max_size 50

int main()
{
    char array [max_size];
    int i=0;

    printf("Enter a character: ");

   /* do{
        scanf("%c",&array[i]);
        i++;
     }
    while(array[i] != '\0');*/

        scanf(" %s",array);

        printf("%s",array);



    return 0;
}
