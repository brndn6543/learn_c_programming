/**
 * Take a string input from the user and then display
 * the fourth character using pointer notation.
 */
#include <stdio.h>

int main() {
    char name[10];
    printf("Enter your name: ");
    scanf("%s", name);

    printf("%c", *(name + 3));
    return 0;
}