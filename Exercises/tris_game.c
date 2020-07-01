// write a tris game
#include <stdio.h>

enum Status { WON, LOSE, CONTINUE, P1, P2 };

void showGameDisplay(char a, char b, char c, char d, char e, char f, char g, char h, char i);
void insertSymbol(char position, enum Status currentPlayer);
enum Status checkPosition(char position);
char askPlayerPosition(enum Status currentPlayer);

char a = ' ';
char b = ' ';
char c = ' ';
char d = ' ';
char e = ' ';
char f = ' ';
char g = ' ';
char h = ' ';
char i = ' ';

int main() {
    enum Status gameStatus;
    enum Status currentPlayer;
    enum Status player1;
    enum Status player2;

    /*
    a  b  c
    d  e  f
    g  h  i
    */
    //char a, b, c, d, e, f, g, h, i;

    int player1P; //player 1 position (X)
    int player2P; //player 2 position (O)
    // X = 1, O = 0

    showGameDisplay(a, b, c, d, e, f, g, h, i);
    printf("%s", "Player 1 Symbol = X\nPlayer 2 Symbol = O\n");
    currentPlayer = P1;
    askPlayerPosition(currentPlayer);
    gameStatus = CONTINUE;

    while (gameStatus == CONTINUE) {
        askPlayerPosition(currentPlayer);
    }
    
}

void showGameDisplay(char a, char b, char c, char d, char e, char f, char g, char h, char i) {
    printf("a%4c b%4c c%4c\nd%4c e%4c f%4c\ng%4c h%4c i%4c\n", a, b, c, d, e, f, g, h, i);
}

char askPlayerPosition(enum Status currentPlayer) {
    char position;

    if (currentPlayer == P1) {
        printf("%s", "Player 1: ");
        scanf("%c", &position);
        insertSymbol(position, currentPlayer);
        currentPlayer = P2;
    } else {
        printf("%s", "Player 2: ");
        scanf("%c", &position);
        insertSymbol(position, currentPlayer);
        currentPlayer = P1;
    }

    return position;
}

void insertSymbol(char position, enum Status currentPlayer) {
    if (currentPlayer == P1) {
        switch (position) {
            case 'a':
                a = 'X';
                break;
            case 'b':
                b = 'X';
                break;
            case 'c':
                c = 'X';
                break;
            case 'd':
                d = 'X';
                break;
            case 'e':
                e = 'X';
                break;
            case 'f':
                f = 'X';
                break;
            case 'g':
                g = 'X';
                break;
            case 'h':
                h = 'X';
                break;
            case 'i':
                i = 'X';
                break;
            default:
                printf("%s", "Wrong position!\n");
                break;
        }
    }

    showGameDisplay(a,  b,  c,  d,  e,  f,  g,  h,  i);
}

enum Status checkPosition(char position) {
    return CONTINUE;
}