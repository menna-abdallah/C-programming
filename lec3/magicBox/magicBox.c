#include <stdio.h>
#include <stdlib.h>
#include<windows.h>
#include <time.h>

void gotoxy(int x,int y)
{
    COORD coord= {0,0};
    coord.X=x;
    coord.Y=y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
}
int main()
{
    int i=0, col, row;
    int size ;
// get the size
    do
    {
        printf("Enter the box size: ");
        scanf("%d",&size);
    }while(size %2 ==0 || size <= 1 );

// set initial values for col and row
    col = size;
    row = 1 ;
// start for
    for(i=1;i<=size*size;i++)
    {
// put 1
        if (i==1)
        {
            gotoxy(col,row);
            printf("%d ",i);
            Sleep(400);
        }
        else if ((i-1)% size != 0)
        {
// reset col and row considering spaces
           row = row-2;
           col = col-2;
           if(row <= 0)
            {
                row = 2*size-1;
            }
            if(col <= 0)
            {
                col = 2*size-1;
            }
            gotoxy(col,row);
            printf("%d ",i);
            Sleep(400);
        }
        else
        {
            row= row +2;
            gotoxy(col,row);
            printf("%d ",i);
            Sleep(400);
        }
    }
    return 0;
}

  /* int i=0, col, row;
    int num ;
// get the size
    do{
    printf("Enter the box size: ");
    scanf("%d",&num);
    }while(num %2 ==0 || 1 == num);


    col = (num+1)/2;
    row = 1 ;

    for(i=1;i<=num*num;i++){

      if (i==1){
        gotoxy(col,row);
        printf("%d",i);
        Sleep(400);}
    else if ((i-1)% num != 0) {
       row --;
        col --;
        if(row == 0)
           {
               row = num;
           }
        if(col == 0)
        {
             col = num;
        }
        gotoxy(col,row);
        printf("%d",i);
        Sleep(400);
    }
    else {
            row++;
            gotoxy(col,row);
        printf("%d",i);
        Sleep(400);
        }

    }
*/
