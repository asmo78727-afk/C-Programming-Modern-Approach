#include<stdio.h>

int main(void) {

	/*
		5. In one state, single residents are subject to the following income
		tax:
		Income				Amount of tax
		Not over $750		1% of income
		$750–$2,250			$7.50		plus 2% of amount over $750
		$2,250–$3,750		$37.50		plus 3% of amount over $2,250
		$3,750–$5,250		$82.50		plus 4% of amount over $3,750
		$5,250–$7,000		$142.50		plus 5% of amount over $5,250
		Over $7,000			$230.00		plus 6% of amount over $7,000
		Write a program that asks the user to enter the amount of taxable
		income, then displays the tax due.
	*/

	float Income, tax;

	printf(" enter the amount of taxable: ");
	scanf_s("%f", &Income);

	if (Income <= 750)
		tax = .01f * Income;
	else if (Income <= 2250)
		tax = 7.50f + .02f * (Income - 750);
	else if (Income <= 3750)
		tax = 37.5f + .03f * (Income - 2250);
	else if (Income <= 5250)
		tax = 82.50f + .04f * (Income - 3750);
	else if (Income <= 7000)
		tax = 142.50f + .05f * (Income - 5250);
	else
		tax = 230.00 + .06f * (Income - 7000);

	printf("tax = %.2f", tax);
	return 0;
}