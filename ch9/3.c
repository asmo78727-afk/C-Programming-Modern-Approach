#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>
/*
    3. Modify Programming Project 9 from Chapter 8 so that it includes the following functions:
    void generate_random_walk(char walk[10][10]);
    void print_array(char walk[10][10]);
    main first calls generate_random_walk, which initializes the array to contain '.'
    characters and then replaces some of these characters by the letters A through Z, as
    described in the original project. main then calls print_array to display the array on
    the screen.
*/
void generate_random_walk(char walk[10][10]);
void print_array(char walk[10][10]);

int main(void)
{
    char x[10][10];


    generate_random_walk(x);
    print_array(x);

    return 0;
}
void generate_random_walk(char walk[10][10])
{
    char z = 'A';
    int check[10][10] = { 0 };
    int i = 0, old_i = 0, j = 0, old_j = 0;

    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 10; j++)
        {
            walk[i][j] = '.';
        }
    }
    srand((unsigned)time(NULL));
    for (i = 0, j = 0;;)
    {
        walk[i][j] = z;
        z += 1;
        old_i = i;
        old_j = j;
        check[i][j] = 1;
        if (walk[i][j] == 'Z')
        {
            break;
        }

        int moved = 0;
        int start = rand() % 4;  //1
        for (int k = 0; k < 4; k++)
        {
            int d = (start + k) % 4;  //1+4=5 =1
            i = old_i;
            j = old_j;
            switch (d)
            {
            case 0:
                i += 1;
                break;
            case 1:
                i -= 1;
                break;
            case 2:
                j += 1;
                break;
            case 3:
                j -= 1;
                break;
            }
            if (i >= 0 && i < 10 && j >= 0 && j < 10 && check[i][j] == 0)
            {
                moved = 1;
                break;
            }
        }
        if (!moved)
        {
            break;
        }
    }
}

void print_array(char walk[10][10])
{
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            printf("%c", walk[i][j]);
        }
        printf("\n");
    }
}
