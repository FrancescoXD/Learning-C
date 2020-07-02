#include <stdio.h>

#define SIZE 5

int main() {
    // make an array
    int n[5];
    int c[5] = {1, 2, 3, 4, 5};
    int t[10] = {0}; // initialize all to zero
    int f[] = {1, 2, 3, 4, 5}; // array size is omitted
    int a[SIZE];

    // size_t represents an unsigned integer type and is used for arrays
    for (size_t i = 0; i < 5; i++) {
        n[i] = 0;
    }

    printf("%s%13s\n", "Element", "Value");

    for (size_t i = 0; i < 5; i++) {
        printf("%7u%13d\n", i, n[i]);
    }
}