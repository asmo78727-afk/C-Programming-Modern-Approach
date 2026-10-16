#include <stdio.h>
#include<ctype.h>
#include<string.h>
/*
    9. Modify Programming Project 10 from Chapter 7 so that it includes the following function:
    int compute_vowel_count(const char *sentence);
    The function returns the number of vowels in the string pointed to by the sentence
    parameter.
*/
int compute_vowel_count(const char *sentence){
    int count =0;
    while (*sentence) {
        switch(toupper((unsigned char)*sentence++)){
            case'A': case'E': case'I': case'O': case'U':
                count += 1;break;
        }
		}

	return count;
}
int main(void) {

   char word[100];
    int x ;
	printf("Enter a sentence: ");

	fgets(word,sizeof(word),stdin);
	word[strcspn(word,"\n")]='\0';
	x= compute_vowel_count(word);


	printf("Your sentence contains %d vowels.", x);
	return 0;
}
