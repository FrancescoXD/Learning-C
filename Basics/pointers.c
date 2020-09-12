#include <stdio.h>

void* change_number();

int main() {
    puts("Hello Pointers!");
    // one pointer and one integer
    int *point_to_integer, iAmAnInteger;
    point_to_integer = &iAmAnInteger;
    printf("Insert an integer: ");
    scanf("%d", &iAmAnInteger);
    puts("");

    printf("%d\n", *point_to_integer); // the result will be the integer
    printf("%d\n", point_to_integer); // the result will be the address in memory of the integer

    change_number(point_to_integer);
    printf("%d\n", iAmAnInteger);
}

void* change_number(int *x) {
    *x = 1;
}

// & operatore di indirizzo, con quello si ha l'indirizzo in memoria di una variabile
// * il contrario di &, con questo si ha il valore dell'indirizzo in memoria
// *puntatore è come fare *(&variabile)