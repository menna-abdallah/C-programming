#include <stdio.h>
#include <stdlib.h>

int main()
{
  /*C Program to add two matrix and put the result in a third one, then print the result.*/
   int row,col;

   int array1 [2][4] = {{1,2,3,4},{5,6,7,8}};
   int array2 [2][4] = {{1,2,3,4},{5,6,7,8}};
   int array3 [2][4];

   for (int i=0; i<2 ; i++){
    for(int j =0; j< 4;j++){
        array3[i][j]= array1[i][j]+array2[i][j];
    }}
    for(int i =0; i< 2 ; i++){
        for(int j=0 ; j<4 ;j++){
            printf("%d ",array3[i][j]);
            if (3==j){
                printf("\n");
            }
        }
    }
    return 0;
}
