#include <stdio.h>
#include<limits.h>
int main(void) {
    /*
        1. The square2.c program of Section 6.3 will fail (usually by printing strange answers) if
        i* i exceeds the maximum int value. Run the program and determine the smallest value
        of n that causes failure. Try changing the type of i to short and running the program
        again. (Don’t forget to update the conversion specifications in the call of printf!) Then
        try long. From these experiments, what can you conclude about the number of bits used to
        store integer types on your machine?
    */
    /* Prints a table of squares using a for statement */

    long long n, i;
    int x = 1, y = 1;

    printf("This program prints a table of squares.\n");
    printf("Enter number ");
    scanf_s("%lld", &n);

    for (i = 1; i <= n; i++) {
        //short check
        if (i * i > SHRT_MAX && x != 0) {
            printf("the small value in short is %lld *%lld = %ld\n", i, i, i * i);
            x = 0;
        }
        //int check
        if (i * i > INT_MAX && y != 0) {
            printf("the small value in int is %lld *%lld = %lld\n", i, i, (long)i * i);
            y = 0;
        }
        ///long check
        if ((long)i > LONG_MAX / i) {
            printf("the small value in long is %lld *%lld = %lld\n", i, i, (long long)i * i);
            break;
        }
    }
    return 0;
}