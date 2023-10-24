#include <stdio.h>
#include <windows.h>
#include <conio.h>

void gotoxy(int x, int y) {
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

int main() {
    int mx = 20;
    char text[21];
    int cursor = 0;

    text[mx] = '\0';

    while (1) {
        system("cls");

        printf("%s", text);

        gotoxy(cursor, 1);


        int input = getch();
        if (input == 13) {
            printf("%s", text);
            break;
        } else if (input == 8) {
            if (cursor > 0) {
                for (int i = cursor - 1; i < mx; i++) {
                    text[i] = text[i + 1];
                }
                cursor--;
            }
        } else if (input == 77) {
            if (cursor < mx && text[cursor] != '\0') {
                cursor++;
            }
        } else if (input == 75) {
            if (cursor > 0) {
                cursor--;
            }
        } else if (input >= 32 && input <= 126 && cursor < mx) {
            for (int i = mx; i > cursor; i--) {
                text[i] = text[i - 1];
            }
            text[cursor] = (char)input;
            cursor++;
        }
    }

    return 0;
}
