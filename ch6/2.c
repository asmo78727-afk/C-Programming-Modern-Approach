#include <stdio.h>

int main(void) {
    /*
        2. Write a program that asks the user to enter two integers,
        then calculates and displays their
        greatest common divisor (GCD):
        Enter two integers: 12 28
        Greatest common divisor: 4
        Hint: The classic algorithm for computing the GCD,
        known as Euclid’s algorithm, goes as
        follows: Let m and n be variables containing the two numbers. If n is 0,
        then stop: m contains the GCD. Otherwise, compute the remainder when m is
        divided by n. Copy n into m and copy the remainder into n.
        Then repeat the process, starting with testing whether n is 0.
    */
    /*
         How to calc GCD
         a\b = 48 \18 = 2
             48 % 18 = 12
         a = 18 b = 12
             18 % 12 = 6
         a = 12 b = 6
             12 / 6 = 2
         GCD = 6
     */

    int a, b, r, n1, n2;

    printf("Enter two integers: ");
    scanf_s("%d %d", &n1, &n2);

    a = n1 > n2 ? n1 : n2;
    b = n1 > n2 ? n2 : n1;

    if (b == 0) {
        b = a;
        goto endofprogram;
    }

    for (;;) {
        r = a % b;
        if (r == 0) {
            break;
        }
        a = b;
        b = r;
    }

endofprogram:
    printf("Greatest common divisor: %d", b);

    return 0;
}