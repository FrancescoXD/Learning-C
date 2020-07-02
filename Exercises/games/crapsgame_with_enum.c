#include <stdio.h>
#include <stdlib.h>
#include <time.h>

enum Status { WON, LOST, CONTINUE };

int rollDice(void);

int main() {
    srand(time(NULL));

    int myPoint;
    enum Status gameStatus;
    int sum = rollDice();

    switch (sum) {
    case 7:
    case 11:
        gameStatus = WON;
        break;

    case 2:
    case 3:
    case 12:
        gameStatus = LOST;
        break;
    
    default:
        gameStatus = CONTINUE;
        myPoint = sum;
        printf("%s %d\n", "Point is", myPoint);
        break;
    }

    while (gameStatus == CONTINUE) {
        sum = rollDice();

        if (sum == myPoint) {
            gameStatus = WON;
        } else if (sum == 7) {
            gameStatus = LOST;
        }
    }

    if (gameStatus == WON) {
        puts("Player wins!");
    } else {
        puts("Player loses!");
    }
}

int rollDice() {
    int die1 = 1 + (rand() % 6);
    int die2 = 1 + (rand() % 6);

    printf("%s: %d + %d = %d\n", "Player rolled", die1, die2, die1 + die2);
    return die1 + die2;
}