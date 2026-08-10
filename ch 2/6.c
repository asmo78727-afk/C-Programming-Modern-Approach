#include <stdio.h>

int main(void)
{
    int x;

    printf("Enter x: ");
    scanf("%d", &x);

    int result = ((((3 * x + 2) * x - 5) * x - 1) * x + 7) * x - 6;

    printf("Result = %d\n", result);

    return 0;
}