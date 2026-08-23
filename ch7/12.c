#include <stdio.h>
#include<ctype.h>

int main(void) {
    /*
    12. Write a program that evaluates an expression:
    Enter an expression: 1+2.5*3
    Value of expression: 10.5
    The operands in the expression are floating-point numbers;
    the operators are +, -, *, and /.
    The expression is evaluated from left to right
    (no operator takes precedence over any other operator).
    */
    printf("Enter an expression: ");
    float x, y, end = 1;
    char process, next;
    scanf_s("%f %c", &x, &process, 1);
    ;
    while (end) {
        scanf_s("%f", &y);
        switch (process) {
        case '+': x = x + y; break;
        case '/': x = x / y; break;
        case '*': x = x * y; break;
        case '-': x = x - y; break;
        }

        do {
            next = getchar();
        } while (next == ' ' || next == '\t');

        if (next == '\n') {
            break;
        }
        else {
            process = next;
        }

    }
    printf("opreation=\033[32m%.2f\033[0m", x);
    return 0;
}