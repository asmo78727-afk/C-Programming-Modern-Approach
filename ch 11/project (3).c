#include <stdio.h>
/*
Modify Programming Project 3 from Chapter 6 so that it includes the following function:
void reduce(int numerator, int denominator,
int *reduced_numerator,
int *reduced_denominator);
numerator and denominator are the numerator and denominator of a fraction.
reduced_numerator and reduced_denominator are pointers to variables in
which the function will store the numerator and denominator of the fraction once it has been
reduced to lowest terms.

*/
void reduce(int numerator, int denominator,int *reduced_numerator, int *reduced_denominator)
{
    int a = numerator, b = denominator, remainder, gcd;

    while (b != 0)
    {
        remainder = a % b;
        a = b;
        b = remainder;
    }
    gcd = a;

    *reduced_numerator   = numerator / gcd;
    *reduced_denominator = denominator / gcd;
}

int main(void)
{
    int numerator, denominator;
    int reduced_numerator, reduced_denominator;

    printf("Enter a fraction: ");
    scanf_s("%d / %d", &numerator, &denominator);

    if (denominator == 0)
    {
        printf("In lowest terms: undefined\n");
    }
    else
    {
        reduce(numerator, denominator,
               &reduced_numerator, &reduced_denominator);

        if (reduced_numerator == 0)
        {
            printf("In lowest terms: 0\n");
        }
        else
        {
            printf("In lowest terms: %d/%d\n",
                   reduced_numerator, reduced_denominator);
        }
    }

    return 0;
}
