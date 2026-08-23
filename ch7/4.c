#include <stdio.h>
#include<limits.h>
int main(void) {
    /*
    4. Write a program that translates an alphabetic phone number into
    numeric form:
    Enter phone number: CALLATT
    2255288
    (In case you don’t have a telephone nearby, here are the letters on
    the keys: 2=ABC, 3=DEF, 4=GHI, 5=JKL, 6=MNO, 7=PRS, 8=TUV, 9=WXY.)
    If the original phone number contains
    nonalphabetic characters (digits or punctuation, for example),
    leave them unchanged:
    Enter phone number: 1-800-COL-LECT
    1-800-265-5328
    You may assume that any letters entered by the user are upper case.
    */

    char number;
    printf(" Enter phone number: ");

    while ((number = getchar()) != '\n') {
        if (number >= 'a' && number <= 'z') {
            number = number - 'a' + 'A';
        }
        switch (number) {
        case 'A':case 'B':case 'C':
            number = '2'; break;
        case 'D':case 'E':case 'F':
            number = '3'; break;
        case 'G':case 'H':case 'I':
            number = '4'; break;
        case 'J':case 'K':case 'L':
            number = '5'; break;
        case 'M':case 'N':case 'O':
            number = '6'; break;
        case 'P':case 'R':case 'S':
            number = '7'; break;
        case 'T':case 'U':case 'V':
            number = '8'; break;
        case 'W':case 'X':case 'Y':
            number = '9'; break;
        }
        printf("%c", number);
    }


    return 0;
}