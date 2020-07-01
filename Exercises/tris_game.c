// write a tris game
#include <stdio.h>

enum Status { WON, LOSE, CONTINUE, P1, P2 };

void showGameDisplay(char a, char b, char c, char d, char e, char f, char g, char h, char i);
void insertSymbol(char position);
enum Status checkPosition(char position);
char askPlayerPosition(enum Status currentPlayer);

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
    char a = 'X';
    char b = 'X';
    char c = 'O';
    char d = 'X';
    char e = 'X';
    char f = 'X';
    char g = 'X';
    char h = 'O';
    char i = 'O';

    int player1P; //player 1 position (X)
    int player2P; //player 2 position (O)
    // X = 1, O = 0

    showGameDisplay(a, b, c, d, e, f, g, h, i);
    printf("%s", "Player 1 Symbol = X\nPlayer 2 Symbol = O\n");
    currentPlayer = P1;
    askPlayerPosition(currentPlayer);
}

void showGameDisplay(char a, char b, char c, char d, char e, char f, char g, char h, char i) {
    printf("a%4c b%4c c%4c\nd%4c e%4c f%4c\ng%4c h%4c i%4c\n", a, b, c, d, e, f, g, h, i);
}

char askPlayerPosition(enum Status currentPlayer) {
    char position = 'a';

    if (currentPlayer == P1) {
        printf("%s", "Player 1: ");
        scanf("%c", &position);
        currentPlayer = P2;
    } else {
        printf("%s", "Player 2: ");
        scanf("%c", &position);
        currentPlayer = P1;
    }

    return position;
}

enum Status checkPosition(char position) {
    return CONTINUE;
}