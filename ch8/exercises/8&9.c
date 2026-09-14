#include <stdio.h>

int main(void) {
	/*
        8. Write a declaration for a two-dimensional array named temperature_readings that
	    stores one month of hourly temperature readings. (For simplicity, assume that a month has
	    30 days.) The rows of the array should represent days of the month; the columns should represent hours of the day.
	
        9. Using the array of Exercise 8, write a program fragment that computes the average temperature for a month
        (averaged over all days of the month and all hours of the day).
	*/

    double temperature_readings[30][24] = { 0 };

    for (int i = 0; i < 30; i++) {
        for (int j = 0; j < 24; j++) {
            temperature_readings[i][j] = 20.0 + (i * 0.1) + (j * 0.05);
        }
    }

    double sum = 0.0;
    for (int i = 0; i < 30; i++) {
        for (int j = 0; j < 24; j++) {
            sum += temperature_readings[i][j];
        }
    }
    double monthly_average = sum / (30 * 24);

    printf(" %.2f\n", monthly_average);

    return 0;
}