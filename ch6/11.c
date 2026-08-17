#include <stdio.h>

int main(void) {
    /*
        11. The value of the mathematical constant e can be expressed as an infinite
        series:
        e = 1 + 1/1! + 1/2!
        + 1/3! + …
        Write a program that approximates e by computing the value of
        1 + 1/1! + 1/2! + 1/3! + … + 1/n!
        where n is an integer entered by the user.
    */

    int n = 1, dd = 1;
    double  e = 1.0;

    printf("Enter an n: ");
    scanf_s("%d", &n);

    for (int i = 1; i < n; i++) {
        double factorial = 1.0;
        for (double j = 1.0; j <= i; j++) {
            factorial *= j;
        }
        e += 1.0 / factorial;
    }

    printf("e = %.10f", e);

    return 0;
}