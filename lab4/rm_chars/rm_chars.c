#include <stdio.h>
#include <stdlib.h>
#define max_size 100

int isChar(char c);

int main() {
    char str[max_size];
    char str2[max_size];
    printf("Enter a String: ");
    scanf("%s",str);
    // count the length
    int length =0;
    while (str[length] !='\0'){
        length++;
    }
     int i =0;
     for (i=0; i < length;i++){

        if ( !(isChar(str[i]))){

                /*char temp = str[i];
            str[i] = str[length];
            str[length-1] = temp;
                length--;*/

                str[i]=' ';
            }else{
                str[i] = str[i];
            }
     }
            str[length]='\0';
    printf("%s",str);
   return 0;
}

int isChar(char c)
{
    if ((c >= 65 && c <= 90) || ( c >=97 && c <=122))
    {
        return 1;
    }
    else
    {
        return 0;

    }
}





