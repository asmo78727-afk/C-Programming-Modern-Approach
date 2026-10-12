/* Finds the largest and smallest elements in an array */
#include <stdio.h>
#define N 10
/*
    7. Modify the maxmin.c program of Section 11.4 so that the max_min function uses a
    pointer instead of an integer to keep track of the current position in the array.
*/
void max_min(int a[], int *n, int *max, int *min);
int main(void)
{
    int b[N], i, big, small;
    printf("Enter %d numbers: ", N);
    for (i = 0; i < N; i++)
        scanf("%d", &b[i]);

    max_min(b, b+N, &big, &small);
    printf("Largest: %d\n", big);
    printf("Smallest: %d\n", small);
    return 0;
}
void max_min(int a[], int *n, int *max, int *min)
{
    int *i=&a[1];
    *max = *min = a[0];
    for (; i < n; i++)
    {
        if (*i > *max)
            *max = *i;
        else if (*i < *min)
            *min = *i;
    }
}
