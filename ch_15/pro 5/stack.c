#include "stack.h"
#include<stdio.h>
#include<stdlib.h>
int contents[STACK_SIZE];
int top;
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
void stack_overflow()
{
    printf("Expression is too complex");
    exit(EXIT_FAILURE);

}
void stack_underflow()
{
    printf("Not enough operands in expression");
    exit(EXIT_FAILURE);

}
void push(int i)
{
    if (is_full())
        stack_overflow();
    else
        contents[top++] = i;
}
int pop(void)
{
    if (is_empty())
        stack_underflow();
    else
        return contents[--top];
}
