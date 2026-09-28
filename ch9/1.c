#include <stdio.h>
#include <ctype.h>
/*
    ch 9
    1. Write a program that asks the user to enter a series of integers (which it stores in an array),
    then sorts the integers by calling the function selection_sort. When given an array
    with n elements, selection_sort must do the following:
    1. Search the array to find the largest element, then move it to the last position in the array.
    2. Call itself recursively to sort the first n – 1 elements of the array

*/
void selection_sort(int number[], int n)
{
    if (n <= 1) return;
    int last_number=number[n-1] ;
    int count=0;
    int  max_num= number[0];
    for(int i =1 ; i<n ; i++)
    {
        if(max_num<number[i])
        {
            max_num=number[i];
            count= i ;
        }
    }
    number[n-1]=max_num;
    number[count]=last_number;
    --n;
    selection_sort(number,n);
}

int main(void)
{
    int i=0;
    int numbers[10];
    printf("enter an integar: ");
    for (; i<10 ; i++)
    {
        scanf("%d",&numbers[i]);
    }

    selection_sort(numbers,10);
    for(i=0 ; i<10 ; i++)
    {
        printf("%d ",numbers[i]);
    }
    return 0;
}


