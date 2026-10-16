#include <stdio.h>
#include<ctype.h>
#include<string.h>
/*
    8. Modify Programming Project 5 from Chapter 7 so that it includes the following function:
    int compute_scrabble_value(const char *word);
    The function returns the SCRABBLE value of the string pointed to by word.
*/
int compute_scrabble_value(const char *word){
    int count =0;
    while(*word){
    switch (toupper((unsigned char)*word++)) {

        case 'A':case 'E':case 'I':case 'L':case 'N':
        case 'O':case 'R':case 'S':case 'T':case 'U':
            count += 1; break;
        case 'D':case 'G':
            count += 2; break;
        case 'B':case 'C':case 'M':case 'P':
            count += 3; break;
        case 'F':case 'H':case 'V':case 'W':case 'Y':
            count += 4; break;
        case 'K':
            count += 5; break;
        case 'J':case 'X':
            count += 8; break;
        case 'Q':case 'Z':
            count += 10; break;
    }
    }
    return count;
}

int main(void) {
    char word[20];
    printf("Enter a word:");
    fgets(word, sizeof(word), stdin);
    word[strcspn(word, "\n")] = '\0';
    int x=compute_scrabble_value(word);

    printf("Scrabble value: %d", x);

    return 0;
}
