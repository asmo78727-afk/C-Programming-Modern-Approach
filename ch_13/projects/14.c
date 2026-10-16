#include <stdio.h>
#include<ctype.h>
#include <stdbool.h>
#include<string.h>
/*
    14. Modify Programming Project 16 from Chapter 8 so that it includes the following function:
    bool are_anagrams(const char *word1, const char *word2);
    The function returns true if the strings pointed to by word1 and word2 are anagrams.
*/
bool are_anagrams(const char *word1, const char *word2){
   int count[26] = {0};

    while (*word1) {
        if (isalpha((unsigned char)*word1)) {
            count[tolower((unsigned char)*word1) - 'a']++;
        }
        word1++;
    }

    while (*word2) {
        if (isalpha((unsigned char)*word2)) {
            count[tolower((unsigned char)*word2) - 'a']--;
        }
        word2++;
    }

    for (int i = 0; i < 26; i++) {
        if (count[i] != 0)
            return false;
    }

    return true;

}
int main(void)
{


    char word1[80],word2[80];
    bool check;
    printf("Enter first word: ");
    fgets(word1,sizeof(word1),stdin);
    word1[strcspn(word1,"\n")]='\0';

    printf("Enter second word: ");
    fgets(word2,sizeof(word2),stdin);
    word2[strcspn(word2,"\n")]='\0';

    check =are_anagrams(word1,word2);

        if (check) {
            printf("The words are anagrams.");
        }
        else {
            printf("The words are not anagrams.");
        }


    return 0;
}

