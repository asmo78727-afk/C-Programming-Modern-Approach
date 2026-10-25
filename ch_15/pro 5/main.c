#include"stack.h"
#include<stdio.h>

int main(void)
{   char ch;
    int num1, num2, check=1;
    while(1){
        check=1;
        printf("Enter an RPN expression: ");
        while(check){
        scanf(" %c", &ch);
            switch(ch){
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
                    switch(ch){
                        case '*': num2=pop(); num1=pop(); push(num1*num2) ;break;
                        case '+': num2=pop(); num1=pop(); push(num1+num2) ;break;
                        case '-': num2=pop(); num1=pop(); push(num1-num2) ;break;
                        case '/': num2=pop(); num1=pop(); push(num1/num2) ;break;
                        case '=': printf("Value of expression: %d\n",pop()); make_empty(); check=0;  break;
                        default: return 0;
                    }
            }
        }
    printf("\n");
    }
    return 0;
}
