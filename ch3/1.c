#include <stdio.h>
int main(void)
{
	/*
	Write a program that accepts a date from the user in the form mm/dd/yyyy 
	and then displays it in the form yyyymmdd:
	Enter a date (mm/dd/yyyy): 2/17/2011
	You entered the date 20110217	
	*/

	int day, month, year;

	printf("Enter a date(mm / dd / yyyy) :");
	scanf_s("%d / %d / %d", &day, &month, &year);

	printf("You entered the date %d%.2d%.2d", year, day, month);

	return 0;
}