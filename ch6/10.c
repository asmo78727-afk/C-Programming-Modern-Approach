#include <stdio.h>

int main(void) {
    /*
        10. Programming Project 9 in Chapter 5 asked you to write a program that
        determines which of two dates comes earlier on the calendar.
        Generalize the program so that the user may enter any number of dates.
        The user will enter 0/0/0 to indicate that no more dates will be entered:
        Enter a date (mm/dd/yy): 3/6/08
        Enter a date (mm/dd/yy): 5/17/07
        Enter a date (mm/dd/yy): 6/3/07
        Enter a date (mm/dd/yy): 0/0/0
        5/17/07 is the earliest date
    */

    int mm = 1, dd = 1, yy = 1, mm1 = 0, dd1 = 0, yy1 = 0;

    for (;;) {
        printf("Enter a date (mm/dd/yy): ");
        scanf_s("%2d / %2d / %2d", &mm, &dd, &yy);

        if (mm == 0 && yy == 0 && dd == 0) {
            break;
        }

        if (mm1 == 0 && yy1 == 0 && dd1 == 0) {
            mm1 = mm; yy1 = yy; dd1 = dd;
            continue;
        }

        if (yy < yy1 || yy == yy1 && mm < mm1 || yy == yy1 && mm == mm1 && dd <= dd1) {
            mm1 = mm; yy1 = yy; dd1 = dd;
        }
    }
    printf("%d/%d/%.2d is the earliest date", mm1, dd1, yy1);

    return 0;
}