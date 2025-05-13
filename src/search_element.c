#include <stdio.h>
#include <stdlib.h>

void search(int arr[], int num) {
    for (int i = 0; i <= 5; i++) {
        if (arr[i] == num) {
            printf("%s ", "[+] Value Found");
        }
    }
}

int main() {

    int arr[] = {1, 2, 3, 4, 5};
    search(arr, 3);

    return 0;
}