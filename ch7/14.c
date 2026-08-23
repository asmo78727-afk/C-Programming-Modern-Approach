#include <stdio.h>
#include<math.h>

int main(void) {
    /*
    14. Write a program that uses Newton’s method to compute the square
    root of a positive floating-point number:

    Enter a positive number: 3
    Square root: 1.73205

    Note that the values of y get progressively closer to the true square root of x. For greater
    accuracy, your program should use variables of type double rather than float. Have the
    program terminate when the absolute value of the difference between the old value of y and
    the new value of y is less than the product of .00001 and y. Hint: Call the fabs function to
    find the absolute value of a double. (You’ll need to include the <math.h> header at the
    beginning of your program in order to use fabs.)
    */
    double x, y = 1;
    double new_y = 0;

    printf("Enter a positive number: ");
    scanf_s("%lf", &x);

    for (;;) {
        new_y = (y + x / y) / 2;
        if (fabs(y - new_y) < .00001 * y) {
            break;
        }
        y = new_y;
    }

    printf("Square root: %lf", new_y);

    return 0;
}