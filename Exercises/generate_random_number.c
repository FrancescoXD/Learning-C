// write a program that generate a random number from x to y
#include <stdio.h>
#include <stdlib.h>

int generateRandom(int x, int y);

int main() {
    int x, y;
    scanf("%d %d", &x, &y);

    printf("%d", generateRandom(x, y));
}

int generateRandom(int x, int y) {
    int number = (rand() % (y - x + 1)) + x;

    return number;
}