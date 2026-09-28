#include <stdio.h>
#include<ctype.h>
/*
    6. Write a function that computes the value of the following polynomial:
    3x^5 + 2x^4 - 5x^3 - x^2 + 7x - 6
    Write a program that asks the user to enter a value for x, calls the function to compute the
    value of the polynomial, and then displays the value returned by the function.

*/
int  polynomial(int x)
{
    int value[5]= {1,1,1,1,1};
    value[0]=x;//x^1
    for(int i=1 ; i<5 ; i++)
    {
        value[i] =value[i-1]*x;
    }
    return (3*value[4] +2* value[3] -5*value[2] -value[1] +7*value[0] -6 );
}
int main(void)
{
    int x;

    printf("Enter the value of x:");
    scanf("%d",&x);

    printf("%d",polynomial(x));
    return 0;
}
