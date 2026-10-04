#include <stdbool.h>
#include<stdio.h>
#include<stdlib.h>
#define STACK_SIZE 100
/*
    1. Modify the stack example of Section 10.2 so that it stores characters instead of integers.
    Next, add a main function that asks the user to enter a series of parentheses and/or braces,
    then indicates whether or not they’re properly nested:
    Enter parentheses and/or braces: ((){}{()})
    Parentheses/braces are nested properly
    Hint: As the program reads characters, have it push each left parenthesis or left brace. When
    it reads a right parenthesis or brace, have it pop the stack and check that the item popped is a
    matching parenthesis or brace. (If not, the parentheses/braces aren’t nested properly.) When
    the program reads the new-line character, have it check whether the stack is empty; if so, the
    parentheses/braces are matched. If the stack isn’t empty (or if stack_underflow is ever
    called), the parentheses/braces aren’t matched. If stack_overflow is called, have the
    program print the message Stack overflow and terminate immediately.
*/
/* external variables */
int contents[STACK_SIZE];
int top = 0;
void make_empty(void)
{
    top = 0;
}
bool is_empty(void)
{
    return top == 0;
}
bool is_full(void)
{
    return top == STACK_SIZE;
}
void  stack_overflow(void)
{
    printf("Stack overflow");
    exit(EXIT_FAILURE);
}
void  stack_underflow(void)
{
    printf("Stack underflow");
    exit(EXIT_FAILURE);

}
void push(char i)
{
    if (is_full())
        stack_overflow();
    else
        contents[top++] = i;
}
char pop(void)
{
    if (is_empty())
        stack_underflow();
    else
        return contents[--top];
}
int main(void)
{
    char ch;
    bool checker = true;

    make_empty();
    printf("Enter parentheses and/or braces:");
    while((ch=getchar())!= '\n' &&ch !=EOF)
    {
        if(ch =='{'|| ch=='(')
        {
            push(ch);
        }
        else if(ch=='}' || ch==')')
        {
            if(is_empty())
            {
                checker = false;
            }
            else
            {
                char pop_char =pop(); // { or (
                if ((pop_char=='{' && ch !='}')||(pop_char=='(' && ch!=')'))
                {
                    checker= false;
                }
            }
        }
    }
    if(!is_empty())
    {
        checker=false;
    }
    if(checker)
    {
        printf("Parentheses/braces are nested properly\n");
    }
    else
    {
        printf("Parentheses/braces are not nested properly\n");
    }

    return 0;
}
