#include <stdio.h>
#include<limits.h>
int main(void) {
    /*
    3. Modify the sum2.c program of Section 7.1 to sum a series of double
    values
    */
    /* Sums a series of numbers (using long variables) */
    double n, sum = 0;

    printf("This program sums a series of integers.\n");
    printf("Enter integers (0 to terminate): ");
    scanf_s("%lf", &n);

    while (n != 0) {
        sum += n;
        scanf_s("%lf", &n);
    }
    printf("The sum is: %f\n", sum);

    return 0;
}