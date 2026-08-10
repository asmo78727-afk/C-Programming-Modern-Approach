#include <stdio.h>

int main(void)
{
    int r;
    float pi = 22.0f / 7.0f;

    printf("Enter radius: ");
    scanf("%d", &r);

    float v = (4.0f / 3.0f) * pi * r * r * r;

    printf("Volume = %f\n", v);

    return 0;
}