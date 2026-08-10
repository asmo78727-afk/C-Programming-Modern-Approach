#include <stdio.h>

int main(void)
{
    int amount;

    printf("Enter a dollar amount: ");
    scanf("%d", &amount);

    int n20 = amount / 20;
    amount = amount - (n20 * 20);

    int n10 = amount / 10;
    amount = amount - (n10 * 10);

    int n5 = amount / 5;
    amount = amount - (n5 * 5);

    int n1 = amount;

    printf("$20 bills: %d\n", n20);
    printf("$10 bills: %d\n", n10);
    printf("$5 bills: %d\n", n5);
    printf("$1 bills: %d\n", n1);

    return 0;
}