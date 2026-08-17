#include <stdio.h>

int main(void) {
    /*
       3. Write a program that asks the user to enter a fraction,
        then reduces the fraction to lowest
        terms:
        Enter a fraction: 6/12
        In lowest terms: 1/2
        Hint: To reduce a fraction to lowest terms, first compute the GCD of the
        numerator and denominator. Then divide both the numerator and denominator
        by the GCD.

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
         To reduce a fraction to lowest terms :
         48/6
         12/6

     */

    int a, b, r, n1, n2;

    printf("Enter a fraction: ");
    scanf_s("%d / %d", &n1, &n2);

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

    printf("In lowest terms: %d/%d", n1 / b, n2 / b);

endofprogram:

    if (n1 == 0 && n2 != 0) {
        printf("In lowest terms: %d", n1);
    }
    else if (n2 == 0 || n1 == 0) {
        printf("In lowest terms: undefind");
    }

    return 0;
}