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