#include <stdio.h>
#include<string.h>
/*
        13. Modify Programming Project 15 from Chapter 8 so that it includes the following function:
        void encrypt(char *message, int shift);
        The function expects message to point to a string containing the message to be encrypted;
        shift represents the amount by which each letter in the message is to be shifted.

*/
void encrypt(char *message, int shift)
{

    while(*message)
    {
        if (*message >= 'a' && *message <= 'z')
        {
            *message = ((*message - 'a') + shift) % 26 + 'a';
        }
        else if (*message >= 'A' && *message <= 'Z')
        {
            *message = ((*message - 'A') + shift) % 26 + 'A';
        }
        message++;
    }

}

int main(void)
{
    char word[80+1];
    int shift;

    printf("Enter message to be encrypted:");
    fgets(word,sizeof(word),stdin);
    word[strcspn(word,"\n")]='\0';

    printf("Enter shift amount (1-25): ");
    scanf(" %d", &shift);

    encrypt(word, shift);

    printf("Encrypted message: ");
    printf("%s",word);
    return 0;
}

