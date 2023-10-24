#include <stdio.h>
#include <stdlib.h>

int main()
{

    char firstname[20], lastname[20];

    printf("Input your firstname: ");
    scanf("%s", firstname);
    printf("Input your lastname: ");
    scanf("%s", lastname);

    printf("%s %s \n", firstname, lastname);
    return 0;
}

