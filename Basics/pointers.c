#include <stdio.h>

int main() {
    printf("Hello Pointers!\n");
    // one pointer and one integer
    int *point_to_integer, iAmAnInteger;
    point_to_integer = &iAmAnInteger;
    scanf("%d", &iAmAnInteger);
    // the result will be the integer
    printf("%d\n", *point_to_integer);
    // the result will be the address in memory of the integer
    printf("%d\n", point_to_integer);
}