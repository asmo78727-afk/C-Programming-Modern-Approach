#include<stdio.h>

int main(void) {

	/*
		2. Write a program that asks the user for a 24-hour time,
		then displays the time in 12-hour
		form:
		Enter a 24-hour time: 21:11
		Equivalent 12-hour time: 9:11 PM
		Be careful not to display 12:00 as 0:00.
	*/

	int hour, minute;
	char Am_PM;
	printf("Enter a 24-hour time: ");
	scanf_s("%d : %d", &hour, &minute);
	//21-9 12
	if (hour > 12) {
		hour -= 12;
		Am_PM = 'P';
	}
	else if (!hour) {
		hour = 12;
		Am_PM = 'A';
	}
	else if (hour == 12) {
		Am_PM = 'P';
	}
	else {
		Am_PM = 'A';
	}

	printf("Equivalent 12-hour time: %.2d:%.2d %cM", hour, minute, Am_PM);



	return 0;
}