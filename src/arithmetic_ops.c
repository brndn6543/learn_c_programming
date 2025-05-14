#include <stdio.h>

int main() {
    int num = 0;
    printf("Enter a number: ");
    scanf("%d", &num);

    int result = ((num + 2) - 10) * 10;
    printf("The result is: %d\n", result);

    return 0;
}