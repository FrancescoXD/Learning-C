#include <stdio.h>

void modify_salary(float *salary);

struct Person {
    int id;
    int age;
    float salary;
};

int main() {
    struct Person francesco;
    struct Person *pointer;

    francesco.id = 1;
    francesco.age = 16;
    francesco.salary = 2500;

    pointer = &francesco;

    printf("%d %d %.2f\n", francesco.id, francesco.age, francesco.salary);
    printf("%d %d %.2f\n", pointer->id, pointer->age, pointer->salary);
    modify_salary(&pointer->salary);
    printf("%.2f\n", pointer->salary);

    return 0;
}

void modify_salary(float *salary) {
    *salary = 5000;
}