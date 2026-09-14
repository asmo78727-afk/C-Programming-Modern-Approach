/* Checks numbers for repeated digits */
#include <stdio.h>
int main(void)
{
	/*
		3. Modify the repdigit.c program of Section 8.1 so that the user can enter more than one
		number to be tested for repeated digits.The program should terminate when the user enters
		a number that’s less than or equal to 0.
	*/

	int digit;
	long n;
	while (1) {
		int digit_seen[10] = { 0 };
		printf("Enter a number: ");
		scanf_s("%ld", &n);

		if (n <= 0) {
			return 0;
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
		printf("\n");
	}
	return 0;
}