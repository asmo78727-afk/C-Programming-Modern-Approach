#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    /*
      9. Write a program that generates a “random walk” across a 10 × 10 array. The array will contain characters (all '.' initially). The program must randomly “walk” from element to element, always going up, down, left, or right by one element. The elements visited by the
        program will be labeled with the letters A through Z, in the order visited. Here’s an example
        of the desired output:
        A . . . . . . . . .
        B C D . . . . . . .
        . F E . . . . . . .
        H G . . . . . . . .
        I . . . . . . . . .
        J . . . . . . . Z .
        K . . R S T U V Y .
        L M P Q . . . W X .
        . N O . . . . . . .
        . . . . . . . . . .
        Hint: Use the srand and rand functions (see deal.c) to generate random numbers.
        After generating a number, look at its remainder when divided by 4. There are four possible
        values for the remainder—0, 1, 2, and 3—indicating the direction of the next move. Before
        performing a move, check that (a) it won’t go outside the array, and (b) it doesn’t take us to
        an element that already has a letter assigned. If either condition is violated, try moving in
        another direction. If all four directions are blocked, the program must terminate. Here’s an
        example of premature termination:
        A B G H I . . . . .
        . C F . J K . . . .
        . D E . M L . . . .
        . . . . N O . . . .
        . . W X Y P Q . . .
        . . V U T S R . . .
        . . . . . . . . . .
        . . . . . . . . . .
        . . . . . . . . . .
        . . . . . . . . . .
        Y is blocked on all four sides, so there’s no place to put Z.
    */
    char x[10][10];
    char z = 'A';
    int check[10][10] = { 0 };
    int i = 0, old_i = 0, j = 0, old_j = 0;
    srand((unsigned)time(NULL));

    for (i = 0; i < 10; i++) {
        for (j = 0; j < 10; j++) {
            x[i][j] = '.';
        }
    }

    for (i = 0, j = 0;;) {
        x[i][j] = z;
        z += 1;
        old_i = i;
        old_j = j;
        check[i][j] = 1;

        if (x[i][j] == 'Z') {
            break;
        }

        int moved = 0;
        int start = rand() % 4;  //1


        for (int k = 0; k < 4; k++) {
            int d = (start + k) % 4;  //1+4=5 =1
            i = old_i;
            j = old_j;

            switch (d) {
            case 0: i += 1; break;
            case 1: i -= 1; break;
            case 2: j += 1; break;
            case 3: j -= 1; break;
            }


            if (i >= 0 && i < 10 && j >= 0 && j < 10 && check[i][j] == 0) {
                moved = 1;
                break;
            }
        }

        if (!moved) {
            break;
        }
    }

    for (i = 0; i < 10; i++) {
        for (j = 0; j < 10; j++) {
            printf("%c", x[i][j]);
        }
        printf("\n");
    }

    return 0;
}