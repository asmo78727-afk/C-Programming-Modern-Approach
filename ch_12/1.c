#include <stdio.h>
/*
    1. (a) Write a program that reads a message, then prints the reversal of the message:
    Enter a message: Don't get mad, get even.
    Reversal is: .neve teg ,dam teg t'noD
    Hint: Read the message one character at a time (using getchar) and store the characters in
    an array. Stop reading when the array is full or the character read is '\n'.
    (b) Revise the program to use a pointer instead of an integer to keep track of the current
    position in the array.
*/
int main(void)
{
    char arr[99];
    int i = 0;
    //(a)
    printf("Enter a message: ");
    for (; i < 99; i++)
    {
        arr[i] = getchar();
        if (arr[i] == '\n')
            break;
    }


    if (i == 99)
    {
        i = 98;
    }
    else if (arr[i] == '\n')
    {
        if (i > 0)
            i--;
        else
            i = -1;
    }

    printf("Reversal is: ");
    for (int j = i; j >= 0; j--)
        putchar(arr[j]);
    putchar('\n');

    // (b) using pointer
    char *p = arr;
    printf("Enter a message: ");
    for (; p < arr + 99; p++)
    {
        *p = getchar();
        if (*p == '\n')
            break;
    }

    char *last;
    if (p == arr + 99)
    {
        last = arr + 98;
    }
    else if (*p == '\n')
    {
        if (p > arr)
            last = p - 1;
        else
            last = NULL;
    }
    else
    {
        last = p;
    }

    printf("Reversal is: ");
    if (last != NULL)
    {
        for (char *q = last; q >= arr; q--)
            putchar(*q);
    }
    putchar('\n');

    return 0;
}
