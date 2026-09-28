#include<stdio.h>
/*
    2. Modify Programming Project 5 from Chapter 5 so that it uses a function to compute the
    amount of income tax. When passed an amount of taxable income, the function will return
    the tax due.
*/

float tax(float Income)
{
    float tax;
    if (Income <= 750)
        tax = .01f * Income;
    else if (Income <= 2250)
        tax = 7.50f + .02f * (Income - 750);
    else if (Income <= 3750)
        tax = 37.5f + .03f * (Income - 2250);
    else if (Income <= 5250)
        tax = 82.50f + .04f * (Income - 3750);
    else if (Income <= 7000)
        tax = 142.50f + .05f * (Income - 5250);
    else
        tax = 230.00 + .06f * (Income - 7000);

    return tax;
}
int main(void)
{

    float Income;

    printf(" enter the amount of taxable: ");
    scanf("%f", &Income);

    printf("tax = %.2f", tax(Income));
    return 0;
}
