#include <stdio.h>

int main() {
    /*
        expected output:
        * * * *
        *     *
        * * * *
    */

    unsigned int base, height;
    
    printf("%s", "Insert base length: ");
    scanf("%d", &base);
    printf("%s", "Insert height: ");
    scanf("%d", &height);

    for (int i = 1; i <= height; i++) {
        printf("%s ", "*");
        for (int j = 1; j <= base; j++)
            printf("%s ", "*");

        printf("\n");
    }

    return 0;
}