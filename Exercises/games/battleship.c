// 2 ships
// 1. length: 2 slots
// 2. length: 3 slots

#include <stdio.h>
#define BATTLEFIELD_SIZE 10

enum Status { CONTINUE, FINISHED };
enum Status gameStatus = CONTINUE;

void showGameTable();
void askPlayerPosition();
void insertShip();

// 10 x 10 = 100 slots
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
int currentPlayer = 1;

int main() {
    printf("%s\n\n", "BATTLESHIP GAME");
    showGameTable();
    //askPlayerPosition();
    
    return 0;
}

void showGameTable() {
    printf("%4s %s %s %s %s %s %s %s %s %s\n%2d\n%2d\n%2d\n%2d\n%2d\n%2d\n%2d\n%2d\n%2d\n%2d", "A", "B", "C", "D", "E", "F", "G", "H", "I", "J", 1, 2, 3, 4, 5, 6, 7, 8, 9, 10);
}

void askPlayerPosition() {
    
}