#include <stdio.h>

int main(void)
{
    /*
        11. Modify Programming Project 4 from Chapter 7 so that the program labels its output:
        Enter phone number: 1-800-COL-LECT
        In numeric form: 1-800-265-5328
        The program will need to store the phone number (either in its original form or in its
        numeric form) in an array of characters until it can be printed. You may assume that the
        phone number is no more than 15 characters long
    */
    char number;
    char numbers[15] = { 0 };
    int i = 0;

    printf("Enter phone number: ");

    while ((number = getchar()) != '\n' && i < 15) {
        if (number >= 'a' && number <= 'z') {
            number = number - 'a' + 'A';
        }

        switch (number) {
        case 'A': case 'B': case 'C': number = '2'; break;
        case 'D': case 'E': case 'F': number = '3'; break;
        case 'G': case 'H': case 'I': number = '4'; break;
        case 'J': case 'K': case 'L': number = '5'; break;
        case 'M': case 'N': case 'O': number = '6'; break;
        case 'P': case 'Q': case 'R': case 'S': number = '7'; break;
        case 'T': case 'U': case 'V': number = '8'; break;
        case 'W': case 'X': case 'Y': case 'Z': number = '9'; break;
        }

        numbers[i] = number;
        i++;
    }

    printf("In numeric form: ");
    for (int j = 0; j < i; j++) {
        printf("%c", numbers[j]);
    }
    printf("\n");

    return 0;
}