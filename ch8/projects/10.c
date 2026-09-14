#include <stdio.h>


int main(void)
{
    /*
      10. Modify Programming Project 8 from Chapter 5 so that the departure times are stored in an
        array and the arrival times are stored in a second array. (The times are integers, representing
        the number of minutes since midnight.) The program will use a loop to search the array of
        departure times for the one closest to the time entered by the user.

    */
    int departure[8] = { 480, 583, 679, 767, 840, 945, 1140, 1305 };
    int arrival[8] = { 616, 712, 811, 900, 968, 1075, 1280, 1438 };

    int hour, minute;
    printf("Enter a 24-hour time: ");
    scanf_s("%d:%d", &hour, &minute);

    int user_time = hour * 60 + minute;

    int i;
    for (i = 0; i < 7; i++) {
        if (user_time * 2 < departure[i] + departure[i + 1])
            break;
    }

    int dep = departure[i];
    int arr = arrival[i];

    int dep_h = dep / 60;
    int dep_m = dep % 60;
    char dep_ap;
    if (dep_h < 12) {
        dep_ap = 'A';
        if (dep_h == 0) dep_h = 12;
    }
    else {
        dep_ap = 'P';
        if (dep_h > 12) dep_h -= 12;
    }

    int arr_h = arr / 60;
    int arr_m = arr % 60;
    char arr_ap;
    if (arr_h < 12) {
        arr_ap = 'A';
        if (arr_h == 0) arr_h = 12;
    }
    else {
        arr_ap = 'P';
        if (arr_h > 12) arr_h -= 12;
    }

    printf("Closest departure time is %d:%.2d %c.m., arriving at %d:%.2d %c.m.\n",
        dep_h, dep_m, dep_ap, arr_h, arr_m, arr_ap);


    return 0;
}