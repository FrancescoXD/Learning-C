#include <stdio.h>
#include "employee.h"

int main() {
    int choice;

    puts("Bank Management System V1.0");
    puts("Loading lists of employees...");

    do {
        puts("\nMenu\n1. Add employee\n2. Remove employee\n10. Exit");
        printf("=> ");
        scanf("%d", &choice);
        puts("");

        switch (choice) {
        case 1:
            add_employee();
            break;
        case 2:
            remove_employee();
        case '\t':
        case ' ':
        case '\n':
        default:
            break;
        }
    } while (choice != 10);
    
    puts("Thanks for using this program!");
}