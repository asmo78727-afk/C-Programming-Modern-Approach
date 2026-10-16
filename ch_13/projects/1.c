#include <stdio.h>
#include <string.h>
#define WORD_SIZE 20
/*1. Write a program that finds the “smallest” and “largest” in a series of words. After the user
enters the words, the program will determine which words would come first and last if the
words were listed in dictionary order. The program must stop accepting input when the user
enters a four-letter word. Assume that no word is more than 20 letters long. An interactive
session with the program might look like this:
*/
int main(void)
{
    char word[WORD_SIZE+1];
    char smallestword[WORD_SIZE+1];
    char largestword[WORD_SIZE+1];
    int first_time =1;

    while(1)
    {
        printf("enter a word: ");
        if(fgets(word,sizeof(word)-1,stdin) == NULL)
            break;
        word[strcspn(word,"\n")]='\0';


        if(first_time)
        {
            strcpy(smallestword,word);
            strcpy(largestword,word);
            first_time=0;
        }
        else
        {
            if(strcmp(smallestword,word )>0)
            {
                strcpy(smallestword,word);
            }
            if(strcmp(largestword,word)<0)
            {
                strcpy(largestword, word);
            }
        }
        if(strlen(word)==4)
        {
            break;
        }
    }
    printf("Smallest word: %s\n",smallestword);
    printf("Largest word: %s",largestword);

    return 0;
}
