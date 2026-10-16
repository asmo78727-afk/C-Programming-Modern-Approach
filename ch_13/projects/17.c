#include <stdio.h>
#include<ctype.h>
#include<stdbool.h>
#include<string.h>
/*
    17. Modify Programming Project 2 from Chapter 12 so that it includes the following function:
    bool is_palindrome(const char *message);
    The function returns true if the string pointed to by message is a palindrome.
*/
bool is_palindrome(const char *message){
    char const *start , *end;
    end=message+strlen(message)-1;
    start=message;
    while(start<end){
    //printf("%c %c\n", *start,*end);
        if(!isalpha(*start)){
            start++;
            continue;
        }if(!isalpha(*end)){
            end--;
            continue;
        }
        if(toupper(*start++)!=toupper(*end--))
            return false;
    }
    return true;
}
int main(void)
{
    char message[100];
    printf("Enter a message: ");
    fgets(message,sizeof(message),stdin);
    message[strcspn(message,"\n")]='\0';
    bool check = is_palindrome(message);

    if(check){
        printf("Palindrome");
    }else{
        printf("not a Palindrome");
    }

    return 0;
}
