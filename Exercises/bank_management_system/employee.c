#include <stdio.h>
#define MAX_SIZE 10
int array_size = 10;
int employee_id = 0;

struct Employee {
    char *name;
    int employee_id;
};

struct Employee employee_list[MAX_SIZE];

void add_employee() { // needs fix
    printf("%s", "Insert name: ");
    //scanf("%s", name);
    employee_list[0].name = "Gio";
    employee_list[0].employee_id = 0;
}

void remove_employee() {
    int pos;

    for (size_t i = 0; i < array_size; ++i) {
        printf("[%d] %s\t", employee_list[i].employee_id, employee_list[i].name);
    }
    puts("");

    printf("%s", "Position: ");
    scanf("%d", &pos);

    if (pos < 0 || pos > array_size) {
        puts("Invalid position!");
    } else {
        for (size_t i = pos - 1; i < array_size - 1; ++i) {
            employee_list[i] = employee_list[i + 1];
        }
    }

    array_size--;

    for (size_t i = 0; i < array_size; ++i) {
        printf("%d\t", employee_list[i]);
    }
}