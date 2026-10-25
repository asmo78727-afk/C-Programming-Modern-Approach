//word.c
#include<stdio.h>
#include "word.h"
int read_char(void){
    int ch;
    ch=getchar();
    if(ch=='\t' || ch=='\n')
        ch=' ';
    return ch;
}
//21
//0 20
void read_word(char *word, int len){
    int word_count=0,ch, pos = 0;
    while((ch=read_char())==' ')
        ;
    while(ch!=' '&&ch!=EOF){
        if(pos<len)
            word[pos++]=ch;
        ch=read_char();
        word_count++;
    }
    word[pos]='\0';
    if (word_count > len)
            word[len-1] = '*';
}
