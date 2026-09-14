#include <stdio.h>

int main(void)
{
    /*
        13. Modify Programming Project 11 from Chapter 7 so that the program labels its output:
Enter a first and last name: Lloyd Fosdick
You entered the name: Fosdick, L.
The program will need to store the last name (but not the first name) in an array of characters
until it can be printed. You may assume that the last name is no more than 20 characters long.
    */
    int ch, i = 0;
    char last_name[20] = { 0 }, first_char;
    printf("Enter a first and last name: ");
    while ((ch = getchar()) == ' ')
        ;
    first_char = ch;
    while ((ch = getchar()) != ' ' && ch != '\n')
        ;
    while ((last_name[i] = getchar()) == ' ');
    i++;
    while ((last_name[i] = getchar()) != ' ' && last_name[i] != '\n')
        i++;
    for (int j = 0; j < i; j++) {
        printf("%c", last_name[j]);
    }
    printf(", %c.", first_char);

    return 0;
}