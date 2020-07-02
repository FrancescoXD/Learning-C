#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 7

int main() {
    srand(time(NULL));
    unsigned int frequency[SIZE] = {0};

    for (unsigned int roll = 1; roll <= 60000000; ++roll) {
        size_t face = 1 + rand() % 6;
        ++frequency[face];
    }

    printf("%s%17s\n", "Face", "Frequency");

    for (size_t face = 1; face < SIZE; ++face) {
        printf("%4d%17d\n", face, frequency[face]);
    }
}