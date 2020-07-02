// write a program that forms an equilateral triangle using *
#include <stdio.h>

void printTriangle(int rows);

int main() {
    /*
        expected output:
            *
           * *
          * * *
    */
    unsigned int rows;
    
    printf("%s", "Insert height: ");
    scanf("%d", &rows);

    printTriangle(rows);

    return 0;
}

void printTriangle(int rows) {
    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= rows-i; j++)
            printf(" ");

        for (int k = 1; k <= i; k++)
            printf("%s ", "*");
        
        printf("\n");
    }
}