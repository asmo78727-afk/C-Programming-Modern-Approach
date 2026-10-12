#include <stdio.h>

int main(void)
{
    /*
        5. Modify Programming Project 14 from Chapter 8 so that it uses a pointer instead of an integer to keep track of the current position in the array that contains the sentence.

    */
    char sentenes[70];
    int i = 1, word_count = 0;
    char *p=sentenes,last_char;
    printf("Enter a sentence: ");
    while ((*p = getchar()) == ' ')
        ;
    p++;
    while ((*p = getchar()) != '\n')
        p++;
    --p;
    last_char=*p;

    for(char *q=p; q>=sentenes ; )
    {
        while(*q !=' ')
        {   if(q==sentenes){
            q--;
            break;
            }
            q--;
        }
        p=q+1;
        while (*p!=' ' && *p!='?' && *p!='!' && *p!='\n')
        {
            printf("%c", *p++);
        }
        printf(" ");
        q--;
    }
    printf("%c",last_char);
return 0;
}
