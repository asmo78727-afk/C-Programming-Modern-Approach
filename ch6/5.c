#include <stdio.h>

int main(void) {
    /*
       5. Programming Project 1 in Chapter 4 asked you to write a program that
       displays a two-digit number with its digits reversed.
       Generalize the program so that the number can have one, two, three, or
       more digits. Hint: Use a do loop that repeatedly divides the number by 10,
       stopping when it reaches 0.
    */
    int number;

    printf("enter number :");
    scanf_s("%d", &number);
    if (number < 0) {
        printf("reversed number :-");
        number *= -1;
    }
    else {
        printf("reversed number :");
    }
    do {
        printf("%d", number % 10);
        number = number / 10;
    } while (number != 0);

    return 0;
}