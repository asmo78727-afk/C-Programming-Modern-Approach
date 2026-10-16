#include <stdio.h>
#include<string.h>
/*
    11. Modify Programming Project 13 from Chapter 7 so that it includes the following function:
    double compute_average_word_length(const char *sentence);
    The function returns the average length of the words in the string pointed to by sentence.
*/
double compute_average_word_length(const char *sentence)
{
    //    asmaa  mohamed
    //    *
    int word_count =0;
    int word_char =0;
    while(1)
    {
        while(*sentence==' ')
            sentence++;
        if(*sentence!=' ' && *sentence!='\0')
        word_count++;
        while(*sentence!=' '&&*sentence!='\0')
        {
            word_char++;
            sentence++;
        }
        if(*sentence=='\0') break;
    }
    //printf("%d %d\n",word_char,word_count);
    if(word_count==0)
        return 0.0;
    return (double)word_char/word_count;
}
int main(void)
{

    char word[200];
    float avg;

    printf("Enter a sentence: ");
    fgets(word,sizeof(word),stdin);
    word[strcspn(word,"\n")]='\0';
    //compute_average_word_length(word);
    avg=compute_average_word_length(word);
    printf("Average word length: \033[32m%.1f\033[0m",avg);
    return 0;
}
