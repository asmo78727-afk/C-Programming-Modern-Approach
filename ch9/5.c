#include <stdio.h>
#include<ctype.h>
/*
    5. Modify Programming Project 17 from Chapter 8 so that it includes the following functions:
    void create_magic_square(int n, char magic_square[n][n]);
    void print_magic_square(int n, char magic_square[n][n]);
    After obtaining the number n from the user, main will call create_magic_square,
    passing it an n × n array that is declared inside main. create_magic_square will fill
    the array with the numbers 1, 2, …, n
    2
     as described in the original project. main will then
    call print_magic_square, which will display the array in the format described in the
    original project. Note: If your compiler doesn’t support variable-length arrays, declare the
    array in main to be 99 × 99 instead of n × n and use the following prototypes instead:
    void create_magic_square(int n, char magic_square[99][99]);
    void print_magic_square(int n, char magic_square[99][99]);
*/
void create_magic_square(int n, char magic_square[n][n]);
void print_magic_square(int n, char magic_square[n][n]);
int main(void)
{

    int n = 2;
    char array1[99][99] = { 0 };

    while (n % 2 == 0) {
        printf(" Enter size of magic square:");
        scanf("%d", &n);
    }
    create_magic_square(n,array1);
    print_magic_square(n ,array1);


    return 0;

}
void create_magic_square(int n, char magic_square[][n]){
    int row = 0, col = 0, array_number = 1, old_row, old_col;
    col = (n / 2);

    magic_square[row][col] = array_number;

    while (magic_square[row][col] != n * n) {
        old_col = col;
        old_row = row;
        if ((col != (n - 1))) {
            col += 1;
        }
        else {
            col = 0;
        }

        if ((row != 0)) {
            row = row - 1;
        }
        else {
            row = n - 1;
        }
    again:if (magic_square[row][col] == 0) {
        ++array_number;
        magic_square[row][col] = array_number;
        if (array_number == n*n)break;
    }
    else {
        row = old_row;
        col = old_col;
        row = ((row == (n - 1)) ? 0 : (row + 1));
        goto again;
    }
    }
}
void print_magic_square(int n, char magic_square[n][n]){
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%3d", magic_square[i][j]);
        }
        printf("\n");
    }
}
