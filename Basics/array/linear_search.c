#include <stdio.h>
#define SIZE 100

int linearSearch(const int array[], int key, size_t size);

int main() {
    int a[SIZE];

    for (size_t x; x < SIZE; ++x) {
        a[x] = 2 * x;
    }

    printf("%s", "Enter integer search key: ");
    int searchKey;
    scanf("%d", &searchKey);

    size_t index = linearSearch(a, searchKey, SIZE);

    if (index != -1) {
        printf("Found value in element %d\n", index);
    } else {
        puts("Value not found!");
    }
}

int linearSearch(const int array[], int key, size_t size) {
    for (size_t n = 0; n < size; ++n) {
        if (array[n] == key) {
            return n;
        }
    }

    return -1;
}