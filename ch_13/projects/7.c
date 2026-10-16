#include <stdio.h>
/*
    7. Modify Programming Project 11 from Chapter 5 so that it uses arrays containing pointers to
    strings instead of switch statements. For example, instead of using a switch statement
    to print the word for the first digit, use the digit as an index into an array that contains the
    strings "twenty", "thirty", and so forth.
*/
int main(void)
{
    int number, tens, ones;
    char *n_1_19[]= {"one","two","three","four","five","six","seven","eight","nine","ten.","eleven.",
                     "twelve.","thirteen.","fourteen.","fifteen.","sixteen.","seventeen.","eighteen.",
                     "nineteen."
                    };
    char *tewny_ni[]= {"twenty","thirty","forty","fifty","sixty","seventy","eighty","ninety"};
    printf("Enter a two-digit number: ");
    scanf("%d", &number);

    if (number < 10 || number > 99)
    {
        printf("Error: Please enter a two-digit number.\n");
        return 1;
    }

    tens = number / 10;
    ones = number % 10;

    printf("You entered the number ");
    if(number>=10 &&number <=19)
    {
        printf("%s",n_1_19[number-1]);
    }
    else if(number%10==0)
    {
        printf("%s.",tewny_ni[tens-2]);
    }
    else
    {
        printf("%s-%s.",tewny_ni[tens-2],n_1_19[ones-1]);
    }


    return 0;
}
