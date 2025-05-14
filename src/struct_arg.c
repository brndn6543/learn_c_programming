#include <stdio.h>

typedef struct {
    int id;
} Employee;

void display(Employee employee) {
    printf("ID: %d\n", employee.id);
}

int main() {
    Employee e;

    printf("%s", "Enter ID: ");
    scanf("%d", &e.id);

    display(e);
    return 0;
}