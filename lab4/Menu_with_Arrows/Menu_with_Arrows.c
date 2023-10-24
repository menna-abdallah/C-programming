#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#define up_key 72
#define down_key 80
#define right_key 77
#define left_key 75
#define exit_key 27
#define enter_key 13
#define home_key 71
#define back_key 8




void SetColor(int ForgC) {
    WORD wColor;
    HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_SCREEN_BUFFER_INFO csbi;

    if (GetConsoleScreenBufferInfo(hStdOut, &csbi)) {
        wColor = (csbi.wAttributes & 0xF0) + (ForgC & 0x0F);
        SetConsoleTextAttribute(hStdOut, wColor);
    }
}

void gotoxy(int x, int y) {
    COORD coord = {0, 0};
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

int main()
{
    char key;
    int arrow = 1; // initialize arrow

 while (1) {

 system("cls");

    switch (arrow){
        case 1:
            system("cls");
            gotoxy(2,1);
            SetColor(4);
            printf("New");
            gotoxy(2,4);
            SetColor(15);
            printf("Display");
            gotoxy(2,7);
            SetColor(15);
            printf("Exit");
            break;
        case 2:
            system("cls");
            gotoxy(2,1);
            SetColor(15);
            printf("New");
            gotoxy(2,4);
            SetColor(4);
            printf("Display");
            gotoxy(2,7);
            SetColor(15);
            printf("Exit");
            break;
        case 3:
            system("cls");
            gotoxy(2,1);
            SetColor(15);
            printf("New");
            gotoxy(2,4);
            SetColor(15);
            printf("Display");
            gotoxy(2,7);
            SetColor(4);
            printf("Exit");
            break;
    }

    key=getch();
    if(-32 == key){
     key = getch();
     switch (key){
     case up_key:
       arrow --;
     if ( arrow < 1 ){
            arrow = 3;}
            break;
   case down_key:
     arrow ++;
        if (arrow > 3 ){
            arrow=1;}
            break;
    }
    }
    else{

    switch(key){
    case home_key:
    system("cls");
    arrow =1;
    break;
    case exit_key: //end
    exit(0);
    break;
    case enter_key:
    case right_key:
    system("cls");
   switch (arrow){
       char b;
    case 1:
        printf("new selected \n");
        do{
            b = getch();
        }while(b!=back_key);
        key = home_key;
        break;
    case 2:
        printf("display selected \n");
        getch();
        break;
    case 3:
        printf("exit selected \n");
        getch();
        break;
    default:
        break;
    }
    break;
    default:
        break;
    }
    }
}
 return 0;
}

