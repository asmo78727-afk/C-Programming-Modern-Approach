#include <stdio.h>

void split_date(int day_of_year, int year, int *month, int *day){
	int month_days;
	for (int i = 1; day_of_year > 0; i++) {
		if (i == 1 || i == 3 || i == 5 || i == 7 || i == 8 || i == 10 || i == 12) {
			month_days = 31;
		}
		else if (i == 4 || i == 6 || i == 9 || i == 11) {
			month_days = 30;
		}
		else
		{
			if (year % 4 == 0) month_days = 29;
			else month_days = 28;
		}
		//29-31=-
		if (day_of_year <= month_days ) {
			*day = day_of_year;
			*month = i;
			return;

		}
		else {
			day_of_year -= month_days;
		}
	}
}
int main(void){
	int month,day;
	int num_of_days, years;
	printf("enter number of days : years : ");
	scanf(" %d %d", &num_of_days, &years);
	split_date(num_of_days, years, &month, &day);
	printf("%d:%d", day, month);

	return 0;
}