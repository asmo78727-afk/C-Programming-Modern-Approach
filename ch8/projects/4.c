/* Reverses a series of numbers */
#include <stdio.h>
#define ARRAY_SIZE(arry) ((int)(sizeof(arry)/sizeof(arry[0])))
#define N 10
int main(void)
{

	/*
		4. Modify the reverse.c program of Section 8.1 to use the expression (int)
		(sizeof(a) / sizeof(a[0])) (or a macro with this value) for the array length.
	*/
	int a[N], i;
	printf("Enter %d numbers: ", N);

	for (i = 0; i < ARRAY_SIZE(a); i++)
		scanf_s("%d", &a[i]);

	printf("In reverse order:");

	for (i = ARRAY_SIZE(a) - 1; i >= 0; i--)
		printf(" %d", a[i]);

	printf("\n");

	return 0;
}
