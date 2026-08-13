#include<stdio.h> 

int main(void) {

	/*
		1. Write a program that asks the user to enter a two - digit number,
		then prints the number with
		its digits reversed.A session with the program should have the following appearance :
		Enter a two - digit number : 28
		The reversal is : 82
		Read the number using% d, then break it into two digits.Hint : If n is an integer, then n % 10
		is the last digit in n and n / 10 is n with the last digit removed.

		2. Extend the program in Programming Project 1 to handle three-digit numbers.
	*/

	int num;

	printf("Enter a three - digit number : ");
	scanf_s("%3d", &num);

	printf("The reversal is : %d%d%d", num % 10, (num / 10) % 10, num / 100);


	return 0;
}