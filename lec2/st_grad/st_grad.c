#include <stdio.h>
#include <stdlib.h>

int main()
{
     int degree;

    printf("Enter the student's degree: ");
    scanf("%d",&degree);

    if (degree < 0){
        printf("Enter the correct degree: ");
        scanf("%d",&degree);}
    if (degree < 50)
        printf("fail");
    else if (50 == degree )
        printf("pass");
    else if (65 == degree)
        printf("good");
    else if (degree >= 75 && degree < 85)
        printf("very good");
    else if (degree >= 85)
        printf("excellent");
    return 0;
}
