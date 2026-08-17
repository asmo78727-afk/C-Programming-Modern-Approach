#include <stdio.h>

int main(void) {
    /*
        9. Programming Project 8 in Chapter 2 asked you to write a program that
        calculates the remaining balance on a loan after the first, second,
        and third monthly payments. Modify the program so that it also asks the
        user to enter the number of payments and then displays the balance
        remaining after each of these payments.

        Enter amount of loan: 20000.00
        Enter interest rate: 6.0
        Enter monthly payment: 386.66
        Balance remaining after first payment: $19713.34
        Balance remaining after second payment: $19425.25
        Balance remaining after third payment: $19135.71
    */

    float loan, rate, payment;
    int num, i = 1;

    printf("Enter amount of loan: ");
    scanf_s("%f", &loan);

    printf("Enter interest rate: ");
    scanf_s("%f", &rate);

    printf("Enter monthly payment: ");
    scanf_s("%f", &payment);

    printf("Enter number of payment: ");
    scanf_s("%d", &num);

    float monthly_rate = (rate / 100.0f) / 12.0f;
    while (i <= num) {
        loan = loan + (loan * monthly_rate) - payment;
        printf("Balance remaining after %d payment: $%.2f\n", i, loan);
        i++;
    }
    return 0;
}