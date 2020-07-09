// 2 ships
// 1. length: 2 slots
// 2. length: 3 slots

#include <stdio.h>
#define BATTLEFIELD_SIZE 10
#define TOTAL_SHIPS 2

enum Status { CONTINUE, FINISHED };
enum Status gameStatus = CONTINUE;

void showGameTable();
void askPlayerPosition();
void insertShip();

/*
 A B C D E F G H I J
1
2
3
4
5
6
7
8
9
10
*/
int shipLength[2] = {2, 3};

char battlefield[BATTLEFIELD_SIZE][BATTLEFIELD_SIZE] = {
    {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
    {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
    {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
    {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
    {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
    {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
    {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
    {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
    {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
    {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '}
};

int remainingShipSlot = 5;
int line;
char column;

int main() {
    printf("%s\n\n", "BATTLESHIP GAME");
    showGameTable();
    askPlayerPosition();
    
    return 0;
}

void showGameTable() {
    int line = 0;
    int column = 0;
    printf("%4s %s %s %s %s %s %s %s %s %s\n", "A", "B", "C", "D", "E", "F", "G", "H", "I", "J");
    for (size_t i = 0; i < 10; ++i) {
        int firstInteger = 1;
        int counter = 1;
        printf("%2d %4c %c %c %c %c %c %c %c %c %c", firstInteger, battlefield[line][column]);
        firstInteger++;
        line++;
        column++;
    }
    
}

void askPlayerPosition() {
    for (size_t i = 0; i < TOTAL_SHIPS; ++i) {
        int counter = 1;
        printf("\nEs: a 1\nInsert ship position (length %d): ", counter);
        counter++;
        scanf("%d %c", &line, &column);
        while (getchar() != '\n');
        battlefield[line][column] = 'X';
    }

    showGameTable();
}