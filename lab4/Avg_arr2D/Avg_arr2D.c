#include <stdio.h>
#include <stdlib.h>
#define row 2
#define col 4

int main()
{
    /*Calculate average of each column in a 2D Array.*/

   int array [row][col] ={{1,2,3,4},{5,6,7,8}};

   for (int i=0,sum=0; i<row ; i++){
    for(int j =0; j< col;j++){
        sum += array[i][j];
    }
    printf("the average of row %d is %f \n", i+1 , (float)sum/(float)col);
   }

    return 0;
}
