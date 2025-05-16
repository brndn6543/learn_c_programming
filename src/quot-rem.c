#include <stdio.h>

int main() {
	int num1, num2, quo, rem;
	printf("Enter two numbers: ");
	scanf("%d%d", &num1, &num2);

	if (num2 == 0) {
		printf("[-] Divided by 0\n");
	};

	if (num1 > num2) {
		quo = num1 / num2;
		printf("%d / %d = %d\n", num1, num2, quo);

		rem = num1 % num2;
		printf("Remainder = %d\n", rem);
	};

};