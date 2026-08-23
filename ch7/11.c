#include <stdio.h>
#include<ctype.h>

int main(void) {
	/*
	11. Write a program that takes a first name and last name entered by the user
	and displays the last name, a comma, and the first initial, followed by a period:
	Enter a first and last name: Lloyd Fosdick
	Fosdick, L.
	The user’s input may contain extra spaces before the first name, between the first and last
	names, and after the last name.
	*/
	char ch, first_char;
	int x = 0;

	printf("Enter a first and last name: ");
	//read first char
	while ((ch = getchar()) == ' ')
		;
	first_char = ch;
	//ignore the first name
	while ((ch = getchar()) != ' ') {
	}
	//skip the space then read first char from second name
	while ((ch = getchar()) == ' ')
		;
	printf("%c", ch);
	//read name2
	while ((ch = getchar()) != '\n' && ch != ' ') {
		printf("%c", ch);
	}
	printf(", %c.", first_char);

	return 0;
}