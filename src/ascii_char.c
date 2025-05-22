#include <stdio.h>

int main() {
	char c;
	printf("Enter a character: ");
	scanf_s("%c", &c);

	printf("ASCII value of %c = %d", c, c);

	return 0;
}
