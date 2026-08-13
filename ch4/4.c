#include<stdio.h> 

int main(void) {

	/*
		4. Write a program that reads an integer entered by the user and displays
		it in octal (base 8):
		Enter a number between 0 and 32767: 1953
		In octal, your number is: 03641

	*/

	int num, n1, n2, n3, n4, n5;

	printf("Enter a number between 0 and 32767: ");
	scanf_s("%d", &num);
	n1 = num % 8;
	num /= 8;
	n2 = num % 8;
	num /= 8;
	n3 = num % 8;
	num /= 8;
	n4 = num % 8;
	num /= 8;
	n5 = num % 8;
	printf("In octal, your number is: %d%d%d%d%d", n5, n4, n3, n2, n1);


	return 0;
}