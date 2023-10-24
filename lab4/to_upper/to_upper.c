#include <stdio.h>
#include <stdlib.h>
#define max_size 100

char toUpper(char low);//q.6
int main()
{

    char str[max_size];
    printf("Enter a String: ");
    scanf("%s",str);

     int i =0;
    while (str[i] !='\0'){
        printf("%c",toUpper(str[i]));
        i++;
    }

    return 0;
}
char toUpper(char low){

    if( low >=97 && low <=122){
        low = low - 32;
        return low;
    }
}
