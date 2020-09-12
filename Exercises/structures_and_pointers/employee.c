#include <stdio.h>

void changeName(char **name);

struct EmpAddress {
    char *name;
    int pincode;
};

int main() {
    struct EmpAddress employee[3];
    
    employee[0].name = "John";
    employee[1].name = "Steve";
    employee[2].name = "Bill";

    printf("%s %s %s\n", employee[0].name, employee[1].name, employee[2].name);

    changeName(&employee[0].name);
    printf("%s\n", employee[0].name);
    printf("%d\n", &employee[0].name);
}

void changeName(char **name) {
    *name = "Roger";
}
