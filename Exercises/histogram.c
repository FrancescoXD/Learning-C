#include <stdio.h>
#define SIZE 5

int main() {
    int n[SIZE] = {20, 15, 10, 5, 1};
    printf("%7s%13s%17s\n", "Element", "Value", "Histogram");

    for (size_t i = 0; i < SIZE; i++) {
        printf("%7u%13d        ", i + 1, n[i], "");

        for (size_t j = 1; j <= n[i]; j++) {
            printf("%c", '*');
        }

        puts("");
    }
}