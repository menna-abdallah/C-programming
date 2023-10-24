
#include <stdio.h>
#include <stdlib.h>

int main(){

int y;
int x;
do {
    printf("Enter a number: ");

    int x = scanf("%d", y);


    printf("Error \n");

    while ((y = getchar()) !='\n' && y != EOF);

}
 while (0 == x);


}
