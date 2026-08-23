#include <stdio.h>

int main(void) {
    /*
    13. Write a program that calculates the average word length for a
    sentence:
    Enter a sentence: It was deja vu all over again.
    Average word length: 3.4
    For simplicity, your program should consider a punctuation mark to be
    part of the word to which it is attached.
    Display the average word length to one decimal place.
    */

    char word, next;
    float char_count = 0, numcount = 0;

    printf("Enter a sentence: ");
    scanf_s(" %c", &word, 1);
    char_count++;

    while (1) {
        next = getchar();
        switch (next) {
        case ' ':
        case '\t':numcount++; break;
        case '\n':numcount++; goto end; break;
        default: char_count++;
        }

    }
end:
    printf("Average word length: \033[32m%.1f\033[0m", char_count / numcount);
    return 0;
}