#include <stdio.h>
#include <stdlib.h>

int *display(int *id) {
    return id;
}

int main() {
    int myId = 103;
    int *idPtr = &myId;
    int val = display(*idPtr);

    printf("%d\n", val);

    return 0;
}