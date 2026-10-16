#include <stdbool.h>
#define STACK_SIZE 100
#include <stdio.h>
#include<stdlib.h>
#include<string.h>
/*
    15. Modify Programming Project 6 from Chapter 10 so that it includes the following function:
    int evaluate_RPN_expression(const char *expression);
    The function returns the value of the RPN expression pointed to by expression.
*/
int contents[STACK_SIZE];
int top = 0;
int evaluate_RPN_expression(const char *expression);
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
int main(void)
{
    char expresion[100];

    printf("Enter an RPN expression: ");
    fgets(expresion,sizeof(expresion),stdin);
    expresion[strcspn(expresion,"\n")]='\0';


    printf("%d",evaluate_RPN_expression(expresion));

    return 0;
    }

int evaluate_RPN_expression(const char *expression){
    int num1, num2;
    make_empty();
    while(*expression){
            if(*expression==' '){
                    expression++;
                continue;
            }
            //printf("%c",*expression);
            switch(*expression){
                case '0': push(0) ;break;
                case '1': push(1) ;break;
                case '2': push(2) ;break;
                case '3': push(3) ;break;
                case '4': push(4) ;break;
                case '5': push(5) ;break;
                case '6': push(6) ;break;
                case '7': push(7) ;break;
                case '8': push(8) ;break;
                case '9': push(9) ;break;
                default:
                    switch(*expression){
                        case '*': num2=pop(); num1=pop(); push(num1*num2) ;break;
                        case '+': num2=pop(); num1=pop(); push(num1+num2) ;break;
                        case '-': num2=pop(); num1=pop(); push(num1-num2) ;break;
                        case '/': num2=pop(); num1=pop(); push(num1/num2) ;break;
                        case '=': return pop();
                        default: return 0;
                    }
            }
            expression++;
        }
        return 0;
}
