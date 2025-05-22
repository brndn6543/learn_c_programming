#include <stdio.h>

int main() {
	int n, t1 = 0, t2 = 1;
	printf("[!] Enter the number of terms: ");
	scanf_s("%d", &n);

	for (int i = 1; i <= n; i++) {
		printf("[+] Term %d: ", i);
		const int nextTerm = t1 + t2;
		t1 = t2;
		t2 = nextTerm;
		printf("%d\n", nextTerm);
	}

	return 0;
}