#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    //unsigned int seed;
    //printf("%s", "Insert seed: ");
    //scanf("%u", &seed);
    //srand(seed);
    srand(time(NULL)); // generates a seed for rand() based on the time

    for (int i = 1; i <= 10; i++) {
        printf("%10d", 1 + (rand() % 6)); // remainder = [0 to 5] + 1 = [1 to 6]

        if (i % 5 == 0) {
            puts("");
        }
    }

    printf("%d", RAND_MAX % 6); // divides RAND_MAX by 6 and returns the remainder
    printf("\n%d", RAND_MAX);

    return 0;
}