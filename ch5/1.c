#include<stdio.h>
int main(void) {
	/*
		1. Write a program that calculates how many digits a number contains:
		Enter a number: 374
		The number 374 has 3 digits
		You may assume that the number has no more than four digits. Hint: Use if statements to
		test the number. For example, if the number is between 0 and 9, it has one digit.
		If the number is between 10 and 99, it has two digits.
	*/

	int num, x=0;

	printf("Enter a number:");
	scanf_s("%d",&num);

	if (num < 0) {
		//for negative number
		num *= -1;
	}

	if (num >= 0 && num <=9) {
		x = 1;
	} else if(num >= 10 && num <= 99) {
		x = 2;
	}
	else if (num >= 100 && num <= 999) {
		x = 3;
	}
	else if (num >= 1000 && num <= 9999) {
		x = 4;
	}
	printf("The number %d has %d digits",num,x);


	return 0;
}