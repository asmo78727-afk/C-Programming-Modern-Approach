#include <stdio.h>
#include<string.h>
/*
    16. Modify Programming Project 1 from Chapter 12 so that it includes the following function:
    void reverse(char *message);
    The function reverses the string pointed to by message. Hint: Use two pointers, one initially pointing to the first character of the string and the other initially pointing to the last
    character. Have the function reverse these characters and then move the pointers toward
    each other, repeating the process until the pointers meet.
*/
void reverse(char *message){

    while(*message==' '){
        message++;
    }
    char *tostart=message;
    char *p=message;
    if(*p=='\n' || *p=='\0'){
        printf("no word ;");
        return;
    }
    //go to the end of the word
    while(*message)
        message++;
    message--;
    for( char temp ; p<message ; p++ , message--){
        temp =*p;
        *p=*message;
        *message=temp;
        //printf("%c",*message);
    }
    return;
}
int main(void)
{
    char arr[99];
    int i = 0;

    printf("Enter a message: ");
    fgets(arr,sizeof(arr),stdin);
    arr[strcspn(arr,"\n")]='\0';
    reverse(arr);
    printf("%s",arr);

    return 0;
}

