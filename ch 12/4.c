#include <stdio.h>
#include<ctype.h>
/*
    4. Simplify Programming Project 2(b) by taking advantage of the fact that an array name can
    be used as a pointer.

*/
int main(void)
{
    char arr[99];
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
