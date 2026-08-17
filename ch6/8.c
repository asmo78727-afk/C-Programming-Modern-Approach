#include <stdio.h>

int main(void) {
    /*
        8. Write a Enter starting day of the week (1=Sun, 7=Sat):program that prints a one-month calendar. The user specifies the
         number of days in the month and the day of the week on which the month begins:
        Enter number of days in month: 31
        Enter starting day of the week (1=Sun, 7=Sat): 3
             1 2 3 4 5
        6 7 8 9 10 11 12
        13 14 15 16 17 18 19
        20 21 22 23 24 25 26
        27 28 29 30 31

    */

    int month_num, start_day;

    printf("Enter number of days in month:  ");
    scanf_s("%d", &month_num);

    printf("Enter starting day of the week (1=Sun, 7=Sat):");
    scanf_s("%1d", &start_day);

    for (int i = 1, j = 1; i <= month_num; j++) {
        if (j < start_day) {
            printf("%5c", ' ');
            continue;
        }
        printf("%5d", i);
        if (j % 7 == 0) {
            printf("\n");
        }
        i++;
    }

    return 0;
}