// write a program that forms a equilateral triangle using *
#include <stdio.h>

int main() {
    /*
        expected output:
            *
          * * *
        * * * * *
    */
    unsigned int rows, i, j;
    
    printf("%s", "Insert height: ");
    scanf("%d", &rows);

    for (i = 1; i <= rows; i++) {
        for (j = 1; j <= rows-i; j++)
            printf(" ");

        for (j = 1; j <= i; j++)
            printf("* ");

        printf("\n");
    }

    return 0;
}