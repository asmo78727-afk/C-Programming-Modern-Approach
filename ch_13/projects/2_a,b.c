#include <stdio.h>
#include <string.h>
#define MAX_REMIND 50 /* maximum number of reminders */
#define MSG_LEN 60 /* max length of reminder message */

/*
    2. Improve the remind.c program of Section 13.5 in the following ways:
    (a) Have the program print an error message and ignore a reminder if the corresponding
    day is negative or larger than 31. Hint: Use the continue statement.
    (b) Allow the user to enter a day, a 24-hour time, and a reminder. The printed reminder list
    should be sorted first by day, then by time. (The original program allows the user to
    enter a time, but it’s treated as part of the reminder.)
    */
int read_line(char str[], int n);
int main(void)
{
    char reminders[MAX_REMIND][MSG_LEN+20];
    char day_str[12], msg_str[MSG_LEN+1];
    int day, i, j, num_remind = 0;
    int hour, minute;
    for (;;)
    {
        if (num_remind == MAX_REMIND)
        {
            printf("-- No space left --\n");
            break;
        }
        // (b) take minutes &hours
        printf("Enter day, hours:minutes, and reminder: ");
        scanf(" %2d", &day);

        if (day == 0)
            break;
        scanf("%2d:%2d",&hour,&minute);

        //(a) check for wrong day
        if (day<0 ||day>31)
        {
            printf("not a day \n");
            while(getchar()!='\n')
                ;
            continue;
        }
        sprintf(day_str, "%2d% .2d%c%.2d ", day,hour,':',minute);
        //printf("%s",day_str);

        read_line(msg_str, MSG_LEN);
        for (i = 0; i < num_remind; i++)
            if (strcmp(day_str, reminders[i]) < 0)
                break;

        for (j = num_remind; j > i; j--)
            strcpy(reminders[j], reminders[j-1]);
        strcpy(reminders[i], day_str);
        strcat(reminders[i], msg_str);


        num_remind++;
    }
    printf("\nDay Reminder\n");
    for (i = 0; i < num_remind; i++)
        printf(" %s\n", reminders[i]);
    return 0;
}
int read_line(char str[], int n)
{
    int ch, i = 0;
    while ((ch = getchar()) != '\n')
        if (i < n)
            str[i++] = ch;
    str[i] = '\0';
    return i;
}
