#include <stdio.h>
#include <string.h>
int main(void)
{
    /*
        12. Modify Programming Project 14 from Chapter 8 so that it stores the words in a twodimensional char array as it reads the sentence, with each row of the array storing a single word. Assume that the sentence contains no more than 30 words and no word is more
    than 20 characters long. Be sure to store a null character at the end of each word so that it
    can be treated as a string.
    */
    char word[30+1][20+1];
    char ch;
    char sentenes[70];
    int i = 0, j= 0;
    printf("Enter a sentence: ");

    while((ch=getchar())!='\n'&& ch!=EOF &&i<31)
    {
        if(ch=='\n' ||ch=='?'||ch=='!'||ch=='.')
        {
            break;
        }
        if((ch==' '&& j!=0)||j==31)
        {
            word[i][j]='\0';
            i++;
            j=0;
            continue;
        }
        if(ch==' '&& j==0)
        {
            continue;
        }
        word[i][j++]=ch;


    }
    char last =(ch!='\n')?ch:'\0';
    for(int j=i ; j>=0 ; j--)
    {
        printf("%s", word[j]);
        if(j<i&&j>0)
        {
            printf(" ");
        }
    }
    printf("%c",last);
    return 0;
}
