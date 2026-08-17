#include <stdio.h>

int main(void) {
    /*
        12. Modify Programming Project 11 so that the program continues adding
        terms until the current term becomes less than ε, where ε is a small
        (floating-point) number entered by the user
    */

    double e = 1.0, factorial = 1.0, epsilon;

    printf("Enter a small floating-point number (epsilon): ");
    scanf_s("%lf", &epsilon);

    for (int i = 1;; i++) {

        factorial *= i;
        double term = 1.0 / factorial;

        if (term < epsilon) {
            break;
        }

        e += term;
    }

    printf("e = %.10lf", e);

    return 0;
}