#include <stdio.h>
#include<ctype.h>
/*
    2. (a) Write a program that reads a message, then checks whether it’s a palindrome (the letters
    in the message are the same from left to right as from right to left):
    Enter a message: He lived as a devil, eh?
    Palindrome
    Enter a message: Madam, I am Adam.
    Not a palindrome
    Ignore all characters that aren’t letters. Use integer variables to keep track of positions in the
    array.
    (b) Revise the program to use pointers instead of integers to keep track of positions in the
    array.
*/
int main(void)
{
    char arr[99];
    int i=0;
    // (a)
    /*
    printf("Enter a message: ");
    while(i<99){
        arr[i]=toupper(getchar());
        if(arr[i]=='\n'){
            break;
        }
        if(arr[i]>='A'&&arr[i]<='Z'){
        i++;
        }
    }
    if(i==99){
        i--;
    }else if(arr[i]==   '\n'){
        if(i==0){
            i=-1;
        }else {
            i--;
        }
    }
    //printf("%c %c\n",arr[i],arr[0]);
    for(int j=0 ; j<=i ; i--, j++){
        if(arr[i]!=arr[j]){
            printf("not a Palindrome");
            return 0;
        }
    }
    printf("Palindrome");
    */
    // (b)
    char *p=arr ,*q=arr;
    printf("Enter a message: ");
    while(p<arr+99){
        *p=toupper(getchar());
        if(*p=='\n'){
            break;
        }
        if(*p>='A'&&*p<='Z'){
         p++;
        }
    }
    if(p==arr+99){
        p--;
    }else if(*p=='\n'){
        if(p==arr){
            *p=-1;
        }else {
           printf("invaild value");
        }
    }
    //printf("%c %c\n",arr[i],arr[0]);
    for(; p>q ; p--, q++){
        if(*p!=*q){
            printf("not a Palindrome");
            return 0;
        }
    }
    printf("Palindrome");
    return 0;
}
