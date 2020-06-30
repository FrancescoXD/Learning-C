// write a program that forms a right triangle using *
#include <stdio.h>

int main() {
    int rows, i, j;

    rows = 5;

    for (i = 1; i <= rows; i++) {
        for (j = 1; j <= i; j++)
            printf("%s", "*");

        printf("\n");
    }

    return 0;
}