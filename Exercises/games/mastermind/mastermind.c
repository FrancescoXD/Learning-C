#include <stdio.h>
#define CODE_LENGTH 4

void startGame(int secretCode[CODE_LENGTH]);
int checkCode(int secretCode[], int code[]);

int main() {
    int secretCode[CODE_LENGTH];
    int input;

    printf("%s", "Mastermind game!\n\n");
    puts("Insert the secret code.\n");

    for (size_t i = 0; i < CODE_LENGTH; ++i) {
        printf("%s%d: ", "Code in position number ", i);
        scanf("%d", &input);
        secretCode[i] = input;
        while(getchar() != '\n');
    }

    startGame(secretCode);
}

void startGame(int secretCode[CODE_LENGTH]) {
    int input;
    int code[CODE_LENGTH];

    puts("\nTry to find out the secret code!\n");
    while (!checkCode(secretCode, code)) {
        for (size_t i = 0; i < CODE_LENGTH; ++i) {
        printf("%s%d: ", "Code in position number ", i);
        scanf("%d", &input);
        code[i] = input;
        while(getchar() != '\n');
        }
    }

    puts("\nThe encoder wins!");
}

int checkCode(int secretCode[], int code[]) {
    int rightNumbers = 0;
    int rightNumbersPosition = 0;

    for (size_t i = 0; i < CODE_LENGTH; ++i) {
        for (size_t j = 0; j < CODE_LENGTH; ++j) {
            if (code[j] == secretCode[i]) rightNumbers++;
        }
        if (code[i] == secretCode[i]) rightNumbersPosition++;
    }

    printf("%s%d\n%s%d\n", "Right numbers: ", rightNumbers, "Right numbers position: ", rightNumbersPosition);
    if (rightNumbersPosition == 4) {
        return 1;
    }

    return 0;
}