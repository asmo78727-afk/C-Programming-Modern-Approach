#include <stdio.h>
#include<ctype.h>

int main(void) {
	/*
	10. Write a program that counts the number of vowels (a, e, i, o, and u)
	in a sentence:
	Enter a sentence: And that's the way it is.
	Your sentence contains 6 vowels.
	*/
	char ch;
	int x = 0;
	printf("Enter a sentence: ");
	while ((ch = toupper(getchar())) != '\n') {
		if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
			x += 1;
		}
	}
	printf("Your sentence contains %d vowels.", x);
	return 0;
}