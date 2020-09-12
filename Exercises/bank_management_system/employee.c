#include <stdio.h>

struct Employee {
    char *name;
    char *surname;
    int employee_id;
};

struct Employee employee_list[10];

void add_employee() {
    employee_list[0].name = "Giorgio";
    printf("%s", employee_list[0].name);
}

// Remove an employee

int remove_employee(int array[], int n, int key) {
    int pos = findEmployee(employee_list, n, key);

    if (pos == -1) {
        puts("Employee not found!");
        return n;
    }

    for (size_t i = pos; i < n; ++i) {
        array[i] = array[i + 1];
    }

    return n - 1;
}

int findEmployee(int array[], int n, int key) {
    for (size_t i = 0; i < n; ++i) {
        if (array[i] == key)
            return i;
    }

    return n - 1;
}