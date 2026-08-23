#include <stdio.h>
#include<ctype.h>

int main(void) {
	/*
	8. Modify Programming Project 8 from Chapter 5 so that the user enters a time using
	the 12-hour clock. The input will have the form hours:minutes followed by
	either A, P, AM, or PM(either lower-case or upper-case).
	White space is allowed (but not required) between the numerical time and the
	AM/PM indicator. Examples of valid input:
	1:15P
	1:15PM
	1:15p
	1:15pm
	1:15 P
	1:15 PM
	1:15 p
	1:15 pm
	You may assume that the input has one of these forms; there is no need to test for errors
   */
	int  hour, minute;
	char Am_pm;
	int leave_time_hour, leave_time_minute, arrive_time_hour, arrive_time_minute;
	char arrive_time_Am_Pm, leave_time_Am_Pm;
	char input_A_P;

	printf("Enter a hours:minutes Am or Pm: ");
	scanf_s("%d:%d %c", &hour, &minute, &input_A_P, 1);

	if (input_A_P == 'P' || input_A_P == 'p') {
		if (hour != 12) hour += 12;
	}
	else if (input_A_P == 'A' || input_A_P == 'a') {
		if (hour == 12) hour = 0;
	}

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
	else if (x * 2 < 840 + 945) {
		//2 : 00 p.m. 4 : 08 p.m.
		arrive_time_hour = 2; arrive_time_minute = 0; arrive_time_Am_Pm = 'P';
		leave_time_hour = 4; leave_time_minute = 8; leave_time_Am_Pm = 'P';
	}
	else if (x * 2 < 945 + 1140) {
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