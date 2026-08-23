#include <stdio.h>
#include<ctype.h>

int main(void) {
	/*
	9. Write a program that asks the user for a 12-hour time, then displays the time
	in 24-hour form:
	Enter a 12-hour time: 9:11 PM
	Equivalent 24-hour time: 21:11
	See Programming Project 8 for a description of the input format.

	*/
	int  hour, minute;
	char input_A_P;

	printf("Enter a 12-hour time: ");
	scanf_s("%d:%d %c", &hour, &minute, &input_A_P, 1);

	input_A_P = toupper(input_A_P);

	if (input_A_P == 'A') {
		if (hour == 12) hour = 0;
	}
	else if (input_A_P == 'P') {
		if (hour != 12)
			hour += 12;
	}

	printf("Equivalent 24-hour time: %.2d:%.2d", hour, minute);

	return 0;
}