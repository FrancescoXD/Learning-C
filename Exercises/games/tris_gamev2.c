#include <stdio.h>
#define TABLE_SIZE 9

enum Player { P1, P2 };
enum Status { CONTINUE, FINISHED };
int currentPlayer = 1;
enum Status gameStatus = CONTINUE;

void showGameTable();
void askPlayerPosition();
void insertSymbol();
void checkGameStatus();

char table[] = {' ', ' ', ' ',
                ' ', ' ', ' ',
                ' ', ' ', ' '};
char position;
char symbol;

int main() {
    showGameTable();
    askPlayerPosition();

    do {
        while (getchar() != '\n');
        showGameTable();
        askPlayerPosition();
    } while (gameStatus == CONTINUE);
    
}

void askPlayerPosition() {
    if (currentPlayer % 2 == 1) {
        symbol = 'X';
        printf("%s", "Player 1: ");
        position = getchar();
        insertSymbol();
        checkGameStatus();
    } else {
        symbol = 'O';
        printf("%s", "Player 2: ");
        position = getchar();
        insertSymbol();
        checkGameStatus();
    }
}

void insertSymbol() {
    int index = position - 'a';
    if (table[index] == ' ') {
        table[index] = symbol;
        ++currentPlayer;
    } else {
        puts("Slot not empty!");
    }
}

void showGameTable() {
    unsigned int cont = 0;
    
    printf("%4c%4c%4c\n%4c%4c%4c\n%4c%4c%4c\n\n", 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i');

    for (size_t i = 0; i < TABLE_SIZE; ++i) {
        printf("%4c", table[i]);
        ++cont;
        if (cont == 3) {
            puts("");
            cont = 0;
        }
    }
}

/*
a b c - 0 1 2
d e f - 3 4 5
g h i - 6 7 8
*/

void checkGameStatus() {
    if (table[0] == 'X') {
        if (table[1] == 'X') {
            if (table[2] == 'X') {
                printf("Player 1 wins!");
                gameStatus = FINISHED;
            }
        }
    }
}