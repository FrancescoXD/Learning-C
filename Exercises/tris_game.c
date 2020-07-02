// write a tris game
#include <stdio.h>

enum Status { TIE, WON, LOSE, P1, P2 };

void showGameDisplay();
void insertSymbol(char position);
void checkPosition();
char askPlayerPosition();

enum Status currentPlayer = P1;

char a = '.';
char b = '.';
char c = '.';
char d = '.';
char e = '.';
char f = '.';
char g = '.';
char h = '.';
char i = '.';

char position;
char symbol;

int main() {
    enum Status player1;
    enum Status player2;

    // X = 1, O = 0

    printf("%10s", "Tic Tac Toe Game\n");
    showGameDisplay();
    printf("%s", "Player 1 Symbol = X\nPlayer 2 Symbol = O\n\n");
    position = askPlayerPosition();

    do {
        while (getchar() != '\n');
        
        position = askPlayerPosition();
    } while (1);
    
    
}

    /*
    a  b  c
    d  e  f
    g  h  i
    */

void showGameDisplay() {
    printf("a%4c b%4c c%4c\nd%4c e%4c f%4c\ng%4c h%4c i%4c\n", a, b, c, d, e, f, g, h, i);
}

char askPlayerPosition() {
    if (currentPlayer == P1) {
        printf("%s", "Player 1: ");
        position = getchar();
        //scanf("%c", &position);
        insertSymbol(position);
        currentPlayer = P2;
    } else {
        printf("%s", "Player 2: ");
        position = getchar();
        //scanf("%c", &position);
        insertSymbol(position);
        currentPlayer = P1;
    }

    return position;
}

void insertSymbol(char position) {
    if (currentPlayer == P1 ) {
        symbol = 'X';
    } else {
        symbol = 'O';
    }

    switch (position) {
        case 'a':
            checkPosition();
            break;
        case 'b':
            b = symbol;
            break;
        case 'c':
            c = symbol;
            break;
        case 'd':
            d = symbol;
            break;
        case 'e':
            e = symbol;
            break;
        case 'f':
            f = symbol;
            break;
        case 'g':
            g = symbol;
            break;
        case 'h':
            h = symbol;
            break;
        case 'i':
            i = symbol;
            break;
        case ' ':
        case '\n':
        case '\t':
            break;
        default:
            printf("%s", "Wrong position!\n");
            break;
    }

    showGameDisplay();
}

void checkPosition() {
    if (position == '.') {
        position = symbol;
    } else {
        //puts("already busy");
        position = symbol;
    }
}