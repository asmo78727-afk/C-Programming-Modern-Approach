/*
7. Write a program that prompts the user for a number and then displays the number, using
characters to simulate the effect of a seven-segment display:
Enter a number: 491-9014
     _     _   _
|_| |_| | |_| | | | |_|
  |  _| |  _| |_| |   |
Characters other than digits should be ignored. Write the program so that the maximum
number of digits is controlled by a macro named MAX_DIGITS, which has the value 10. If
the number contains more than this number of digits, the extra digits are ignored. Hints: Use
two external arrays. One is the segments array (see Exercise 6 in Chapter 8), which stores
data representing the correspondence between digits and segments. The other array, digits,
 will be an array of characters with 4 rows (since each segmented digit is four characters high) and MAX_DIGITS * 4 columns
 (digits are three characters wide, but a space is
needed between digits for readability). Write your program as four functions: main,
clear_digits_array, process_digit, and print_digits_array. Here are
the prototypes for the latter three functions:
void clear_digits_array(void);
void process_digit(int digit, int position);
void print_digits_array(void);
clear_digits_array will store blank characters into all elements of the digits
array. process_digit will store the seven-segment representation of digit into a
specified position in the digits array (positions range from 0 to MAX_DIGITS – 1).
print_digits_array will display the rows of the digits array, each on a single line,
producing output such as that shown in the example.
*/
#include <stdio.h>
#define MAX_DIGITS 10
//global variable
const int segments[10][7] =
{
    {1, 1, 1, 1, 1, 1, 0},//0
    {0,1, 1},//1
    {1, 1, 0, 1, 1, 0, 1},//2
    {1, 1, 1, 1, 0, 0, 1},//3
    {0, 1, 1, 0, 0, 1, 1},//4
    {1, 0, 1, 1, 0, 1, 1},//5
    {1, 0, 1, 1, 1, 1, 1},//6
    {1, 1, 1},//7
    {1, 1, 1, 1, 1, 1, 1},//8
    {1, 1, 1, 1, 0, 1, 1}//9
};
char digits[4][4*MAX_DIGITS];

//prototype function
void clear_digits_array(void);
void process_digit(int digit, int position);
void print_digits_array(void);

int main(void)
{
    int ch;
    int position=0;
    printf("Enter a number: ");
    clear_digits_array();

    while((ch=getchar())!='\n' &&position<MAX_DIGITS)
    {
        if(ch>='0'&&ch<='9')
        {
            process_digit(ch-'0',position);
            position++;
        }
    }
    print_digits_array();


    return 0;
}

void clear_digits_array(void)
{
    for(int i=0; i<4; i++)
    {
        for(int j=0; j<4*MAX_DIGITS ; j++)
        {
            digits[i][j]=' ';
        }
    }
    return;
}
void process_digit(int digit, int position)
{
    int col =position*4;

    if(segments[digit][0]) digits[0][col+1]='_';
    if(segments[digit][1]) digits[1][col+2]='|';
    if(segments[digit][2]) digits[2][col+2]='|';
    if(segments[digit][3]) digits[3][col+1]='_';
    if(segments[digit][4]) digits[2][col]='|';
    if(segments[digit][5]) digits[1][col]='|';
    if(segments[digit][6]) digits[1][col+1]='_';
}
void print_digits_array(void)
{
    int i, j;
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < MAX_DIGITS * 4; j++)
            putchar(digits[i][j]);
        putchar('\n');
    }
}

