#include <stdio.h>
#include <stdlib.h>
#define max_size 100

int main()
{
    char string1[max_size], string2[max_size];
    int i;
    printf("Enter a String: ");
    scanf("%s",string1);

    for (i = 0; string1[i] != '\0'; i++) {
        string2[i] = string1[i];
    }
    printf("Copied string: %s", string2);
    return 0;
}

