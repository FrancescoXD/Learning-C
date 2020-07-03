#include <stdio.h>
#define TABLE_SIZE 9

enum Player { P1, P2 };
enum PlayerStatus { WIN, LOSE, TIE };
int currentPlayer = 1;

void showGameTable();
void askPlayerPosition();
void insertSymbol();
enum PlayerStatus checkIfWon();

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
    } while (1);
    
}

void askPlayerPosition() {
    if (currentPlayer % 2 == 1) {
        symbol = 'X';
        printf("%s", "Player 1: ");
        position = getchar();
        insertSymbol();
    } else {
        symbol = 'O';
        printf("%s", "Player 2: ");
        position = getchar();
        insertSymbol();
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