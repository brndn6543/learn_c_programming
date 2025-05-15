#include <stdio.h>

// size_t is the type retruend by the sizeof operator.
double average(const int arr[], size_t len) {
    int sum = 0;

    for (int i = 0; i < len; i++) {
        sum += arr[i];
    }

    return (double)sum / len;
}

int main() {
    int marks[] = {1, 30, 1, 3, 4};
    size_t len = sizeof(marks) / sizeof(marks[0]);

    double avg = average(marks, len);
    printf("Average is %.2f\n", avg);

    return 0;
}