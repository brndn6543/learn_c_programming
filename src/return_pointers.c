#include <stdio.h>

int* display(int *data, size_t size) {

    for (int i = 0; i < size; i++) {
        *(data + i) += 10;
    }

    return data;
}

int main() {

    int myArray[] = {1,2,3,4};
    size_t sz = sizeof(myArray) / sizeof *myArray;

    int *arrayPtr = display(myArray, sz);

    for (int i = 0; i < sz; i++) {
        printf("%d\t", *(arrayPtr + i));
    }

    return 0;
}