#include <stdio.h>
/*
    1. Modify Programming Project 7 from Chapter 2 so that it includes the following function:
    void pay_amount(int dollars, int *twenties, int *tens,
     int *fives, int *ones);
    The function determines the smallest number of $20, $10, $5, and $1 bills necessary to pay
    the amount represented by the dollars parameter. The twenties parameter points to a
    variable in which the function will store the number of $20 bills required. The tens,
    fives, and ones parameters are similar.
*/
void pay_amount(int dollars, int *twenties, int *tens,int *fives, int *ones){
    *twenties= dollars / 20;
    dollars = dollars - (*twenties * 20);

    *tens = dollars / 10;
    dollars = dollars - (*tens * 10);

    *fives = dollars / 5;
    dollars = dollars - (*fives * 5);

    *ones = dollars;
}

int main(void)
{
    int amount;
    int n20,n10,n5,n1;
    printf("Enter a dollar amount: ");
    scanf("%d", &amount);
    pay_amount(amount, &n20, &n10, &n5, &n1);


    printf("$20 bills: %d\n", n20);
    printf("$10 bills: %d\n", n10);
    printf("$5 bills: %d\n", n5);
    printf("$1 bills: %d\n", n1);

    return 0;
}
