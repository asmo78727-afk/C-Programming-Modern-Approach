/* Checks numbers for repeated digits */
#include <stdio.h>
int main(void)
{
	/*
		2. Modify the repdigit.c program of Section 8.1 so that it prints a table showing how
		many times each digit appears in the number:
		Enter a number: 41271092
		Digit: 0 1 2 3 4 5 6 7 8 9
		Occurrences: 1 2 2 0 1 0 0 1 0 1

	*/

	int digit_seen[10] = { 0 };
	int digit;
	long n;
	printf("Enter a number: ");
	scanf_s("%ld", &n);

	if (n < 0) {
		n *= -1;
	}

	while (n > 0) {
		digit = n % 10;
		++digit_seen[digit];
		n /= 10;
	}

	printf("Digit:      ");
	for (int i = 0; i < 10; i++) {
		printf("%3d", i);
	}

	printf("\noccurrences:");
	for (int i = 0; i < 10; i++) {
		printf("%3d", digit_seen[i]);
	}

	return 0;
}