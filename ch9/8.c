#include <stdio.h>
#include<time.h>
#include <stdlib.h>
#include<stdbool.h>
int roll_dice(void)
{
    int num1 = rand() % 6 + 1;
    int num2 = rand() % 6 + 1;
    return num1 + num2;
}
bool play_game(void)
{

    int sum = roll_dice();
    printf("You rolled: %d\n", sum);

    if (sum == 7 || sum == 11)
    {
        return true;
    }
    if (sum == 2 || sum == 3 || sum == 12)
    {
        return false;
    }
    int point = sum;
    printf("Your point is %d\n", point);

    while (1)
    {

        sum = roll_dice();
        printf("You rolled: %d\n", sum);

        if (sum == point)
        {
            return true;
        }
        if (sum == 7)
        {
            return false;
        }
    }
}
int main(void)
{
    srand((unsigned)time(NULL));
    int wins = 0, losses = 0;
    char again;

    do
    {
        if (play_game())
        {
            printf("You win!\n");
            wins++;
        }
        else
        {
            printf("You lose!\n");
            losses++;
        }

        printf("Play again? ");
        scanf(" %c", &again);
    }
    while (again == 'y' || again == 'Y');

    printf("Wins: %d Losses: %d\n", wins, losses);
    return 0;
}
