#ifndef STACK_H
#define STACK_H
#define STACK_SIZE 100
#include<stdbool.h>

void make_empty(void);
bool is_empty(void);
bool is_full(void);
void stack_overflow();
void stack_underflow();
void push(int i);
int pop(void);
/* external variables */
int extern contents[STACK_SIZE];
int extern top;
#endif //STACK_H
