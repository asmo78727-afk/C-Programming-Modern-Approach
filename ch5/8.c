#include<stdio.h>

int main(void) {
	/*
		8. The following table shows the daily flights from one city to
		another:
		Departure time Arrival time
			8:00 a.m. 10:16 a.m.
			9:43 a.m. 11:52 a.m.
			11:19 a.m. 1:31 p.m.
			12:47 p.m. 3:00 p.m.
			2:00 p.m. 4:08 p.m.
			3:45 p.m. 5:55 p.m.
			7:00 p.m. 9:20 p.m.
			9:45 p.m. 11:58 p.m.

		Write a program that asks user to enter a time (expressed in hours and minutes,
		using the 24-hour clock).
		The program then displays the departure and arrival times for the flight whose
		departure time is closest to that entered by the user:

		Enter a 24-hour time: 13:15
		Closest departure time is 12:47 p.m., arriving at 3:00 p.m.

		Hint: Convert the input into a time expressed in minutes since midnight,
		and compare it to the departure times, also expressed in minutes since midnight.
		For example, 13:15 is 13 × 60 + 15 = 795 minutes since midnight,
		which is closer to 12:47 p.m. (767 minutes since midnight)
		than to any of the other departure times

	*/
	/*
		convert to 24 hour then to equavelant minute using (hour * 60 + minute)
		08:00 – 10:16: 480 – 616
		09:43 – 11:52: 583 – 712
		11:19 – 13:31: 679 – 811
		12:47 – 15:00: 767 – 900
		14:00 – 16:08: 840 – 968
		15:45 – 17:55: 945 – 1075
		19:00 – 21:20: 1140 – 1280
		21:45 – 23:58: 1305 – 1438
		calculate the mid point using (start time + next start time)\2 to
		determind the nearest point
	*/
	int  hour, minute;
	char Am_pm;
	int leave_time_hour, leave_time_minute, arrive_time_hour, arrive_time_minute;
	char arrive_time_Am_Pm, leave_time_Am_Pm;

	printf("Enter a 24-hour time: ");
	scanf_s("%d : %d", &hour, &minute);

	int x = hour * 60 + minute;
	if (x * 2 < 480 + 583) {
		//8:00 a.m. 10 : 16 a.m.
		arrive_time_hour = 8; arrive_time_minute = 0; arrive_time_Am_Pm = 'A';
		leave_time_hour = 10; leave_time_minute = 16; leave_time_Am_Pm = 'A';
	}
	else if (x * 2 < 583 + 679) {
		//9 : 43 a.m. 11 : 52 a.m.
		arrive_time_hour = 9; arrive_time_minute = 43; arrive_time_Am_Pm = 'A';
		leave_time_hour = 11; leave_time_minute = 52; leave_time_Am_Pm = 'A';
	}
	else if (x * 2 < 679 + 767) {
		//11 : 19 a.m. 1 : 31 p.m.
		arrive_time_hour = 11; arrive_time_minute = 19; arrive_time_Am_Pm = 'A';
		leave_time_hour = 1; leave_time_minute = 31; leave_time_Am_Pm = 'P';
	}
	else if (x * 2 < 767 + 840) {
		//12 : 47 p.m. 3 : 00 p.m.
		arrive_time_hour = 12; arrive_time_minute = 47; arrive_time_Am_Pm = 'p';
		leave_time_hour = 3; leave_time_minute = 00; leave_time_Am_Pm = 'p';
	}
	else if (x * 2 < 840 + 954) {
		//2 : 00 p.m. 4 : 08 p.m.
		arrive_time_hour = 2; arrive_time_minute = 0; arrive_time_Am_Pm = 'P';
		leave_time_hour = 4; leave_time_minute = 8; leave_time_Am_Pm = 'P';
	}
	else if (x * 2 < 954 + 1140) {
		//3:45 p.m. 5 : 55 p.m.
		arrive_time_hour = 3; arrive_time_minute = 45; arrive_time_Am_Pm = 'P';
		leave_time_hour = 5; leave_time_minute = 55; leave_time_Am_Pm = 'P';
	}
	else if (x * 2 < 1140 + 1305) {
		//7 : 00 p.m. 9 : 20 p.m.
		arrive_time_hour = 7; arrive_time_minute = 0; arrive_time_Am_Pm = 'P';
		leave_time_hour = 9; leave_time_minute = 2; leave_time_Am_Pm = 'p';
	}
	else {
		//9 : 45 p.m. 11 : 58 p.m.
		arrive_time_hour = 9; arrive_time_minute = 45; arrive_time_Am_Pm = 'p';
		leave_time_hour = 11; leave_time_minute = 58; leave_time_Am_Pm = 'P';
	}
	printf("Closest departure time is %.2d:%.2d %c.m., arriving at %.2d:%.2d %c.m."
		, arrive_time_hour, arrive_time_minute, arrive_time_Am_Pm, leave_time_hour, leave_time_minute, leave_time_Am_Pm);

	return 0;
}