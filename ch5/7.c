#include<stdio.h>

int main(void) {

	/*
		7. Write a program that finds the largest and smallest of four
		integers entered by the user:
		Enter four integers: 21 43 10 35
		Largest: 43
		Smallest: 10
		Use as few if statements as possible. Hint:
		Four if statements are sufficient.
	*/

	int num1, num2, num3, num4;
	int max, min, max3_4, min3_4;

	printf("Enter four integers: ");
	scanf_s("%d %d %d %d", &num1, &num2, &num3, &num4);

	if (num1 > num2) {
		max = num1;
		min = num2;
	}
	else {
		max = num2;
		min = num1;
	}
	if (num3 > num4) {
		max3_4 = num3;
		min3_4 = num4;
	}
	else {
		max3_4 = num4;
		min3_4 = num3;
	}
	if (max3_4 > max) {
		max = max3_4;
	}
	if (min3_4 < min) {
		min = min3_4;
	}

	printf("Largest: %d\nSmallest: %d", max, min);

	return 0;
}