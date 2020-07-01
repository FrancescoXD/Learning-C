#include <stdio.h>

// function prototype
int sum(int x, int y);

int main() {
    printf("%d", sum(10, 20));

    return 0;
}

int sum(int x, int y) {
    return x + y;
}