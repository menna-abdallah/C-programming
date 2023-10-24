#include <stdio.h>
#include <stdlib.h>

int main()
{
  char key=getch();
    if(-32 == key){
    printf("Extented \n");
    key = getch();
    printf("%d \n", key);
    }
    else{
    printf("Normal \n");
    printf("%d \n", key);

}
    return 0;
}
