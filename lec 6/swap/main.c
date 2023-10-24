#include <stdio.h>
#include <stdlib.h>

void swap(int * x, int * y);
void swap2 (int *ptr, int *ptr2);
void swap3 (int *a, int *b);
void swap4 (int *ptr, int *ptr2 ,int x ,int y);
int main()
{

    ///// way 1 ///////
   int x = 5,y = 6;

    printf("x before swap : %d \n y before swap : %d \n",x,y);

    swap(&x ,&y);

    printf("x after swap : %d \n y after swap : %d \n \n",x,y);

    printf("///////// way 2 //////////////// \n \n");

    printf("x before swap : %d \n y before swap : %d \n",x,y);

    swap2(&x ,&y);

    printf("x after swap : %d \n y after swap : %d \n",x,y);

    printf("///////// way 3 //////////////// \n \n");

    printf("x before swap : %d \n y before swap : %d \n",x,y);

    swap2(&x ,&y);

    printf("x after swap : %d \n y after swap : %d \n",x,y);

    printf("///////// way 4 //////////////// \n \n");

    printf("x before swap : %d \n y before swap : %d \n",x,y);

    swap4(&x ,&y , x ,y);

    printf("x after swap : %d \n y after swap : %d \n",x,y);

    return 0;
}
void swap (int *x, int *y)
{
    int temp;
    temp = *x;
    *x=*y;
    *y=temp;
}
void swap2 (int *ptr, int *ptr2)
{
    *ptr= *ptr + *ptr2;

    *ptr2 = *ptr - *ptr2;

    *ptr = *ptr - *ptr2;
}
void swap3 (int *a, int *b)
{
    *a = *a ^ *b;
    *b = *a ^ *b;
    *a = *a ^ *b;
}
void swap4 (int *ptr, int *ptr2 ,int x ,int y)
{
   *ptr = y;
   *ptr2 = x;
}
