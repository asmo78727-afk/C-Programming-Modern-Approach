#include <stdio.h>
/*
    2. Modify Programming Project 8 from Chapter 5 so that it includes the following function:
    void find_closest_flight(int desired_time,
     int *departure_time,
     int *arrival_time);
    This function will find the flight whose departure time is closest to desired_time
    (expressed in minutes since midnight). It will store the departure and arrival times of this
    flight (also expressed in minutes since midnight) in the variables pointed to by
    departure_time and arrival_time, respectively.

*/
void find_closest_flight(int desired_time, int *departure_time, int *arrival_time) {
    int departures[8] = {480, 583, 679, 767, 840, 945, 1140, 1305};
    int arrivals[8]   = {616, 712, 811, 900, 968, 1075, 1280, 1438};

    int i;
    for (i = 0; i < 8; i++) {
        if (desired_time * 2 < departures[i] + departures[i + 1]) {
            *departure_time = departures[i];
            *arrival_time = arrivals[i];
            return;
        }
    }
}

int main(void) {
    int hour, minute;
    int desired_time, departure_time, arrival_time;

    printf("Enter a 24-hour time: ");
    scanf("%d:%d", &hour, &minute);

    desired_time = hour * 60 + minute;

    find_closest_flight(desired_time, &departure_time, &arrival_time);

    int dep_hour = departure_time / 60;
    int dep_min  = departure_time % 60;
    char dep_am_pm = (dep_hour < 12) ? 'A' : 'P';
    if (dep_hour == 0)       dep_hour = 12;
    else if (dep_hour > 12)  dep_hour -= 12;

    int arr_hour = arrival_time / 60;
    int arr_min  = arrival_time % 60;
    char arr_am_pm = (arr_hour < 12) ? 'A' : 'P';
    if (arr_hour == 0)       arr_hour = 12;
    else if (arr_hour > 12)  arr_hour -= 12;

    printf("Closest departure time is %d:%.2d %c.m., arriving at %d:%.2d %c.m.\n",
           dep_hour, dep_min, dep_am_pm,
           arr_hour, arr_min, arr_am_pm);

    return 0;
}
