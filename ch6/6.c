#include <stdio.h>

int main(void) {
    /*
      6. Write a program that prompts the user to enter a number n, then prints all
      even squares between 1 and n. For example, if the user enters 100,
      the program should print the following:
        4
        16
        36
        64
        100

    */
    int number, even = 2;

    printf("enter number :");
    scanf_s("%d", &number);

    while (even * even <= number) {
        printf("%d\n", even * even);
        even += 2;
    }

    return 0;
}