#include <stdio.h>
#define TABLE_SIZE 9

enum Player { P1, P2 };
enum PlayerStatus { WIN, LOSE, TIE };
enum Player currentPlayer = P1;

void showGameTable();
void askPlayerPosition();
void insertSymbol();

char table[] = {'a', 'b', 'c',
                'd', 'e', 'f',
                'g', 'h', 'i'};
char position;
int index;
char symbol;

int main() {
    showGameTable();
}

void askPlayerPosition() {
    if (currentPlayer == P1) {
        symbol = 'X';
        position = getchar();
        
    } else {
        symbol = 'O';
        position = getchar();
    }
}

void insertSymbol() {
    switch (position) {
    case 'a':
        index = 0;
    case 'b':
        index = 1;
    case 'c':
        index = 2;
    case 'd':
        index = 3;
    case 'e':
        index = 4;
    case 'f':
        index = 5;
    case 'g':
        index = 6;
    case 'h':
        index = 7;
    case 'i':
        index = 8;
    case '\t':
    case '\n':
    case ' ':
        break;
    
    default:
        puts("Wrong position!");
        break;
    }
}

void showGameTable() {
    unsigned int cont = 0;

    for (size_t i = 0; i < TABLE_SIZE; ++i) {
        printf("%4c", table[i]);
        ++cont;
        if (cont == 3) {
            puts("");
            cont = 0;
        }
    }
}