// include the standard library (standard input output)
#include <stdio.h>

// the main program
int main() {
    short int shortNumber = 1;
    long int longNumber = 10000;
    int integerNumber = 10;
    unsigned int unsignedIntegerNumber = 10;

    char character = 'A';

    double doubleNumber = 1.10;
    float floatNumber = 1.10;
    float floatCroppedNumber = 1.10;

    /*
        %u = unsigned integer
        %d = integer
        %c = character
        %f = double or float
        %.{n}f = round off to 2nd decimal place
    */
    printf("%d %d %d %d %c %f %f %.2f", shortNumber, longNumber, integerNumber, unsignedIntegerNumber, character, doubleNumber, floatNumber, floatCroppedNumber);

    return 0;
}