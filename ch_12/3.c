#include <stdio.h>
/*
    3. Simplify Programming Project 1(b) by taking advantage of the fact that an array name can
    be used as a pointer.
*/
int main(void)
{

    // (b) using pointer
    char arr[99];
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
