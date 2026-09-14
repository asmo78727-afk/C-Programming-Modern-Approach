/* Checks numbers for repeated digits */
#include <stdbool.h>
#include <stdio.h>
int main(void)
{
	/*
		1. Modify the repdigit.c program of Section 8.1 so that it shows which digits (if any)
	were repeated:
	Enter a number: 939577
	Repeated digit(s): 7 9

	*/

	int digit_seen[10] = { 0 };
	int digit, checker = 0;
	long n;

	printf("Enter a number: ");
	scanf_s("%ld", &n);
	while (n > 0) {
		//939577
		digit = n % 10;//7
		++digit_seen[digit];
		n /= 10;
	}

	for (int i = 0; i < 10; i++) {
		if (digit_seen[i] > 1) {
			if (checker == 0)
				printf("Repeated digit(s):");
			printf(" %d", i);
			checker = 1;
		}
	}
	if (checker == 0)
		printf("No repeated digit\n");
	return 0;
}