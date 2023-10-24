#include <stdio.h>
#include <stdlib.h>
#define max_size 100

int main()
{
/*C Program to Find the Length of a String without Using strlen()*/

    char str[max_size];
    printf("Enter a String: ");
    scanf("%s",str);

    int length =0;
    while (str[length] !='\0'){
        length++;
    }

    printf("Length of the string: %d", length);
    return 0;
}


