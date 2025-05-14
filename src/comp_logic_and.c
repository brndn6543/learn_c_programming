#include <stdio.h>

int main() {
    int num = 1, result;

    if (num > 0 && num != 2) {
        result = 1;
    } else {
        result = 0;
    }

    printf("%d\n", result);

    return 0;
}