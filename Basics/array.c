#include <stdio.h>

int main() {
    // make an array
    int n[5];

    // size_t represents an unsigned integer type and is used for arrays
    for (size_t i = 0; i < 5; i++) {
        n[i] = 0;
    }

    printf("%s%13s\n", "Element", "Value");

    for (size_t i = 0; i < 5; i++) {
        printf("%7u%13d\n", i, n[i]);
    }
}