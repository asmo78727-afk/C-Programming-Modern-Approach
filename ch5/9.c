#include<stdio.h>

int main(void) {
	/*
		9. Write a program that prompts the user to enter two dates and
		then indicates which date
		comes earlier on the calendar:
		Enter first date (mm/dd/yy): 3/6/08
		Enter second date (mm/dd/yy): 5/17/07
		5/17/07 is earlier than 3/6/08

	*/

	int mm1, dd1, yy1, date1;
	int mm2, dd2, yy2, date2;

	printf("Enter first date (mm/dd/yy):");
	scanf_s("%2d / %2d / %2d", &mm1, &dd1, &yy1);
	printf("Enter second date (mm/dd/yy):");
	scanf_s("%2d / %2d / %2d", &mm2, &dd2, &yy2);
	// 22/11/26 -->262211
	date1 = yy1 * 10000 + mm1 * 100 + dd1;
	date2 = yy2 * 10000 + mm2 * 100 + dd2;
	if (date1 < date2) {
		printf("%d/%d/%.2d is earlier than %d/%d/%.2d", mm1, dd1, yy1, mm2, dd2, yy2);
	}
	else {
		printf("%d/%d/%.2d is earlier than %d/%d/%.2d", mm2, dd2, yy2, mm1, dd1, yy1);

	}

	return 0;
}