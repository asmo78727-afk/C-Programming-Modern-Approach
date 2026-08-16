#include<stdio.h>

int main(void) {

	/*
		4. Here’s a simplified version of the Beaufort scale, which is
		used to estimate wind force:
		Speed (knots) Description
		Less than 1 Calm
		1–3 Light air
		4–27 Breeze
		28–47 Gale
		48–63 Storm
		Above 63 Hurricane
		Write a program that asks the user to enter a wind speed (in knots),
		then displays the corresponding description.
	*/

	int wind_speed;

	printf("enter a wind speed (in knots):");
	scanf_s("%d", &wind_speed);

	if (wind_speed < 1)
		printf("wind force: Calm");
	else if (wind_speed < 4)
		printf("wind force: Light air");
	else if (wind_speed < 28)
		printf("wind force: Breeze");
	else if (wind_speed < 48)
		printf("wind force: Gale");
	else if (wind_speed < 64)
		printf("wind force: Storm");
	else
		printf("wind force: Hurricane");

	return 0;
}