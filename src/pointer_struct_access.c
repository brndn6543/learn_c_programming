#include <stdio.h>

typedef struct {
	int roll;
	float gpa;
} Student;

int main() {
	Student s1;
	Student *sPtr;

	printf("Enter int for roll and float for gpa:\n");
	scanf_s("%d", &s1.roll);
	scanf_s("%f", &s1.gpa);

	sPtr = &s1;
	printf("Roll = %d\nGPA = %.1f", s1.roll, s1.gpa);

	return 0;
}