// write a program that adds three numbers
#include <stdio.h>

float sum(float x, float y, float z);

int main() {
    float x, y, z;

    printf("%s", "Insert three numbers: ");
    scanf("%f %f %f", &x, &y, &z);
    printf("%.2f", sum(x, y, z));

    return 0;
}

float sum(float x, float y, float z) {
    return x + y + z;
}