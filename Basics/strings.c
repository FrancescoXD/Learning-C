#include <stdio.h>

int main() {
    char username[20]; // the last character is \0

    printf("%s", "Insert your username (max 20 character): ");
    scanf("%19s", username);
    printf("%s%s", "Hi ", username);
}