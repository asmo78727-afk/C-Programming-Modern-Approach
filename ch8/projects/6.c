#include <stdio.h>
#include <ctype.h>
#define MAX_LEN 50

int main(void)
{

	/*
		6. The prototypical Internet newbie is a fellow named B1FF, who has a unique way of writing
		messages. Here’s a typical B1FF communiqué:
		H3Y DUD3, C 15 R1LLY C00L!!!!!!!!!!
		Write a “B1FF filter” that reads a message entered by the user and translates it into B1FFspeak:
		Enter message: Hey dude, C is rilly cool
		In B1FF-speak: H3Y DUD3, C 15 R1LLY C00L!!!!!!!!!!
		Your program should convert the message to upper-case letters, substitute digits for certain
		letters (A→4, B→8, E→3, I→1, O→0, S→5), and then append 10 or so exclamation marks.
		Hint: Store the original message in an array of characters, then go back through the array,
		translating and printing characters one by one.
	*/

	/* Prints a table of compound interest */
	char wordold[MAX_LEN], word[MAX_LEN];
	int i = -1;

	printf("Enter message: ");
	do {
		i++;
		wordold[i] = getchar();
		/*printf("%c", wordold[i]);*/
	} while (wordold[i] != '\n' && i < MAX_LEN - 1);

	for (int j = 0; j < i; j++) {
		word[j] = wordold[j];
	}

	printf("In B1FF-speak: ");

	for (int j = 0; j < i; j++) {
		word[j] = toupper((unsigned char)word[j]);
		switch (word[j]) {
		case'A': word[j] = '4'; break;
		case'B': word[j] = '8'; break;
		case'E': word[j] = '3'; break;
		case'I': word[j] = '1'; break;
		case'O': word[j] = '0'; break;
		case'S': word[j] = '5'; break;
		}
		printf("%c", word[j]);
	}

	printf(" !!!!!!!!!!");
	return 0;
}
