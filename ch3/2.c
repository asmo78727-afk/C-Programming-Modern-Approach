	#include <stdio.h>
	int main(void)
	{
		/*
			Write a program that formats product information entered by the user.A session with the
			program should look like this:
			Enter item number : 583
			Enter unit price : 13.5
			Enter purchase date(mm / dd / yyyy) : 10 / 24 / 2010
			Item Unit Purchase
			Price Date
			583 $ 13.50 10 / 24 / 2010
			The item number and date should be left justified; the unit price should be right justified.
			Allow dollar amounts up to $9999.99.Hint: Use tabs to line up the columns.
		*/

		int item_num;
		int mm, dd ,yyyy;
		float unit_price;

		printf("Enter item number : ");
		scanf_s("%d" ,&item_num);

		printf("Enter unit price : ");
		scanf_s("%f", &unit_price);


		printf("Enter purchase date(mm / dd / yyyy) : \n");
		scanf_s(" %d / %d / %d", &mm , &dd ,&yyyy );

		printf("Item\t\tUnit \t\tPurchase\n");
		printf("    \t\tPrice\t\tDate\n");
		printf("%-4.2d\t\t$%6.2f\t\t%-3.2d/ %-3.2d/ %-5.4d", item_num , unit_price , mm, dd ,yyyy);


		return 0;
	}