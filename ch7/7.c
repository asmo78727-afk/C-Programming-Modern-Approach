#include <stdio.h>

int main(void) {
    /*
    7. Modify Programming Project 6 from Chapter 3 so that the user may add,
    subtract, multiply,or divide two fractions
    (by entering either +, -, *, or / between the fractions).
   */

    int num1, denom1, num2, denom2, division, result_num, result_denom;
    char value;

    printf("Enter two fractions separated by a plus sign :");
    scanf_s("%d/%d %c %d/%d", &num1, &denom1, &value, 1, &num2, &denom2);

    switch (value) {
        case '+':
            result_num = num1 * denom2 + num2 * denom1;
            result_denom = denom1 * denom2;
            break;
        case '-':
            result_num = num1 * denom2 - num2 * denom1;
            result_denom = denom1 * denom2;
            break;
        case '/':
            division = denom2;
            denom2 = num2;
            num2 = division;
        case '*':
            result_num = num1 * num2;
            result_denom = denom1 * denom2;
            break;
        default:printf("error input");
            return 0;
    }

    printf("The %c is %d/%d\n", value, result_num, result_denom);

    return 0;
}