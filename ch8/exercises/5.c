#include<stdio.h>
#include<stdbool.h>
int main(void) {

	/*
	5. The Fibonacci numbers are 0, 1, 1, 2, 3, 5, 8, 13, …, where each number is the sum of the
two preceding numbers. Write a program fragment that declares an array named
fib_numbers of length 40 and fills the array with the first 40 Fibonacci numbers. Hint:
Fill in the first two numbers individually, then use a loop to compute the remaining numbers.

	*/
	int fib_numbers[40] = { 0 };

	for (int i = 1; i < 40; i++) {
		if (i == 1) {
			fib_numbers[i] = 1;
			continue;
		}
		else if (i > 1) {
			fib_numbers[i] = (fib_numbers[i - 1] + fib_numbers[i - 2]);
		}
	}

	for (int i = 0; i < 40; i++) {
		if (i % 6 == 0) {
			printf("\n");
		}
		printf("%-10d", fib_numbers[i]);
	}
	return 0;
}