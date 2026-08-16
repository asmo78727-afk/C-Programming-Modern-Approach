#include<stdio.h>

int main(void) {

	/*
	3.  Modify the broker.c program of Section 5.2 by making both of the
		following changes :
		(a)Ask the user to enter the number of shares and the price per share,
		instead of the value of the trade.
		(b)Add statements that compute the commission charged by a rival
		broker($33 plus 3¢ per share for fewer than 2000 shares;
		$33 plus 2¢ per share for 2000
		shares or more).Display the rival’s commission as well as the
		commission charged by the original broker.
	*/

	/* Calculates a broker's commission */

	float commission, commission2, price_per_share, shares;

	printf("Enter price per share and number of shares : ");
	scanf_s("%f , %f", &price_per_share, &shares);

	float value = price_per_share * shares;

	if (value < 2500.00f)
		commission = 30.00f + .017f * value;
	else if (value < 6250.00f)
		commission = 56.00f + .0066f * value;
	else if (value < 20000.00f)
		commission = 76.00f + .0034f * value;
	else if (value < 50000.00f)
		commission = 100.00f + .0022f * value;
	else if (value < 500000.00f)
		commission = 155.00f + .0011f * value;
	else
		commission = 255.00f + .0009f * value;
	if (commission < 39.00f)
		commission = 39.00f;

	if (shares < 2000) {
		commission2 = 33.0f + .03f * shares;
	}
	else {
		commission2 = 33.0f + .02f * shares;
	}
	printf("Commission1: $%.2f\n", commission);
	printf("Commission2: $%.2f\n", commission2);


	return 0;
}