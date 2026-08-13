	#include <stdio.h>
	int main(void)
	{
		/*
			Write a program that prompts the user to enter a telephone number
			in the form (xxx) xxxxxxx and then displays the number in the form xxx.xxx.xxx:
			Enter phone number [(xxx) xxx-xxxx]: (404) 817-6900
			You entered 404.817.6900

		*/
		int p1, p2, p3;
		printf("Enter phone number [(xxx) xxx-xxxx]: ");
		scanf_s("(%d) %d - %d", &p1, &p2, &p3);
		printf("You entered %d.%d.%d",p1,p2,p3);
	
		
		return 0;
	}