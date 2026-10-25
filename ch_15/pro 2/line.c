//line.c
#include <stdio.h>
#include <string.h>
#include "line.h"
#define MAX_LINE_LEN 60
char line[MAX_LINE_LEN+1];
int line_len = 0;
int num_words = 0;

void clear_line(void)
{
    line[0] = '\0';
    line_len = 0;
    num_words = 0;
}
void add_word(const char *word)
{
    if (num_words > 0) {
        line[line_len] = ' ';
        line[line_len+1] = '\0';

        line_len++;
    }
    strcat(line,word);
    line_len += strlen(word);
    num_words++;
}
int space_remaining(void)
{
    return MAX_LINE_LEN - line_len;
}
void write_line(void)
{
    int gaps[60];
    int num_gaps = num_words -1;
    int extra_spaces=MAX_LINE_LEN-line_len;
    int i,j;

    for( i=0 ; i<num_gaps ; i++){
        gaps[i]=extra_spaces/(num_gaps-i);
        extra_spaces -= gaps[i];
    }
    static int larger_at_end =0;
    if(!larger_at_end){
        int temp;
        for(i=0 ; i<num_gaps/2 ;i++){
            temp =gaps[i];
            gaps[i]=gaps[num_gaps-1-i];
            gaps[num_gaps-1 -i] =temp;
        }
    }

    int gap_index = 0;
    for(i=0 ; i< line_len ; i++){
        if(line[i]!=' '){
             putchar(line[i]);
        }else{
            for (j = 0; j <= gaps[gap_index]; j++) {
                putchar(' ');
            }
            gap_index++;
        }
    }
        putchar('\n');
        larger_at_end = !larger_at_end;
}

void flush_line(void)
{
    if (line_len > 0)
        puts(line);
}
