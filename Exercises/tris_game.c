// write a tris game
#include <stdio.h>

enum Status { WON, LOSE, CONTINUE };

int showGameDisplay();
int insertSymbol(int position);

int main() {
    enum Status gameStatus;
    enum Status player1;
    enum Status player2;

    /*
    a  b  c
    d  e  f
    g  h  i
    */
    int a, b, c, d, e, f, g, h, i;
    int player1P; //player 1 position
    int player2P; //player 2 position
    // X = 1, O = 0

    showGameDisplay();
    printf("%s", "Player 1 start! Insert position: ");
}