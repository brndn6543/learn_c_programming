#include <stdio.h>

int myFunction(int x) {
    return x;
}

int main() {
    int num = 5;
    int ret = myFunction(num);
    printf("%d\n", ret);

    return 0;
}