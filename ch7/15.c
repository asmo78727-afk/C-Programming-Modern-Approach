#include <stdio.h>
#include<limits.h>
#include<float.h>
int main(void) {
    /*
    15. Write a program that computes the factorial of a positive integer:
    Enter a positive integer: 6
    Factorial of 6: 720
    (a) Use a short variable to store the value of the factorial. What is the largest value of n
    for which the program correctly prints the factorial of n?
    (b) Repeat part (a), using an int variable instead.
    (c) Repeat part (a), using a long variable instead.
    (d) Repeat part (a), using a long long variable instead (if your compiler supports the
    long long type).
    (e) Repeat part (a), using a float variable instead.
    (f) Repeat part (a), using a double variable instead.
    (g) Repeat part (a), using a long double variable instead.
    In cases (e)–(g), the program will display a close approximation of the factorial, not necessarily the exact value.
     */

     //for short , int  , long int

     /*
     long long x, y = 0, factorial = 1;
     printf("enter a numbr: ");
     scanf_s("%lld", &x);

     while (y < x) {
         //if (factorial * y >= SHRT_MAX)
         //if (factorial * y >= INT_MAX)
         if (factorial * y >=LONG_MAX)
         {
             printf("max factorial:!%lld = %lld", y, factorial);
             //max factorial:!7 = 5040
             //max factorial:!12 = 479001600
             //max factorial:!12 = 479001600

             return 0;
         }
         y++;
         factorial *= y;
     }
     printf("factorial:!%lld = %lld", y, factorial);

     */

     //-------------------------------------------------------------

     //for long long int, float , double , long double

     /*
     long double x, y = 0, factorial = 1;
     printf("enter a numbr: ");
     scanf_s("%LF", &x);

     while (y < x) {
         //if (factorial * y >= LLONG_MAX)
         //if (factorial * y >= FLT_MAX)
         //if (factorial * y >= DBL_MAX)
         if (factorial * y >= LDBL_MAX)
         {
             printf("max factorial:!%.0LF = %.0LF", y, factorial);

             return 0;
         }
         y++;
         factorial *= y;
     }
     printf("factorial:!%.0LF = %.0LF", y, factorial);
     */

return 0;
}