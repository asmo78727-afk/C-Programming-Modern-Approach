/*
3. Remove the num_in_rank, num_in_suit, and card_exists arrays from the
poker.c program of Section 10.5. Have the program store the cards in a 5 × 2 array
instead. Each row of the array will represent a card. For example, if the array is named
hand, then hand[0][0] will store the rank of the first card and hand[0][1] will store
the suit of the first card.
*/

#include <stdbool.h> /* C99 only */
#include <stdio.h>
#include <stdlib.h>
/* external variables */
bool straight, flush, four, three;
int pairs; /* can be 0, 1, or 2 */
char hand[5][2];
/* prototypes */
void read_cards(void);
void analyze_hand(void);
void print_result(void);
/**********************************************************
 * main: Calls read_cards, analyze_hand, and print_result *
 * repeatedly. *
 **********************************************************/
int main(void)
{
    for (;;)
    {
        read_cards();
        analyze_hand();
        print_result();
    }
}
/**********************************************************
 * read_cards: Reads the cards into the external *
 * variables num_in_rank and num_in_suit; *
 * checks for bad cards and duplicate cards. *
 **********************************************************/
void read_cards(void)
{
    bool card_exists;
    char ch, rank_ch, suit_ch;
    int rank, suit;
    bool bad_card;
    int cards_read = 0;
    for (rank = 0; rank < 5; rank++)
    {
        for (suit = 0; suit < 2; suit++)
            hand[rank][suit] = ' ';
    }
    /* for (suit = 0; suit < NUM_SUITS; suit++)
         num_in_suit[suit] = 0;*/
    while (cards_read < 5)
    {
        card_exists=false;
        bad_card = false;
        printf("Enter a card: ");
        rank_ch = getchar();
        suit_ch = getchar();

        switch (rank_ch)
        {
        case '0':
            exit(EXIT_SUCCESS);
        case '2':
            rank_ch = 0;
            break;
        case '3':
            rank_ch = 1;
            break;
        case '4':
            rank_ch = 2;
            break;
        case '5':
            rank_ch = 3;
            break;
        case '6':
            rank_ch = 4;
            break;
        case '7':
            rank_ch = 5;
            break;
        case '8':
            rank_ch = 6;
            break;
        case '9':
            rank_ch = 7;
            break;
        case 't':
        case 'T':
            rank_ch= 8;
            break;
        case 'j':
        case 'J':
            rank_ch= 9;
            break;
        case 'q':
        case 'Q':
            rank_ch= 10;
            break;
        case 'k':
        case 'K':
            rank_ch= 11;
            break;
        case 'a':
        case 'A':
            rank_ch= 12;
            break;
        default:
            bad_card = true;
        }
        switch (suit_ch)
        {
        case 'c':
        case 'C':
            suit_ch = 0;
            break;
        case 'd':
        case 'D':
            suit_ch = 1;
            break;
        case 'h':
        case 'H':
            suit_ch = 2;
            break;
        case 's':
        case 'S':
            suit_ch = 3;
            break;
        default:
            bad_card = true;
        }
        for (rank = 0; rank < 5; rank++)
        {
            if(hand[rank][0]== rank_ch && hand[rank][1] ==suit_ch )
            {
                card_exists = true;
            }
        }
        while ((ch = getchar()) != '\n')
            if (ch != ' ') bad_card = true;
        if (bad_card)
            printf("Bad card; ignored.\n");
        else if (card_exists)
            printf("Duplicate card; ignored.\n");
        else
        {
            hand[cards_read][0]=rank_ch;
            hand[cards_read][1]=suit_ch;
            cards_read++;
            rank=0;
        }

    }
}
/**********************************************************
 * analyze_hand: Determines whether the hand contains a *
 * straight, a flush, four-of-a-kind, *
 * and/or three-of-a-kind; determines the *
 * number of pairs; stores the results into *
 * the external variables straight, flush, *
 * four, three, and pairs. *
 **********************************************************/
void analyze_hand(void)
{
    int rank, suit;
    straight = true;
    flush = true;
    four = false;
    three = false;
    pairs = 0;

    //bubbly sort
    for(int i=0 ; i<4 ; i++)
    {
        for(int j=0 ; j< 4-i; j++)
        {
            if(hand[j][0]>hand[j+1][0])
            {
                char temp0 =hand[j][0];
                hand[j][0]=hand[j+1][0];
                hand[j+1][0] = temp0;

                char temp1 =hand[j][1];
                hand[j][1]=hand[j+1][1];
                hand[j+1][1] = temp1;
            }
        }

    }
    /*for(int i =0 ; i<5 ; i++){
        printf("%d %d ,,,",hand[i][0],hand[i][1]);
    }*/
    /* check for flush */
    for (int i=0; i<4 ; i++)
    {
        if(hand[i][1]!=hand[i+1][1])
            flush = false;
    }
    /* check for straight */
    for(int i=0 ; i<4 ; i++)
    {
        if(hand[i+1][0]-hand[i][0] !=1)
        {
            straight=false;
        }
    }
    /* check for 4-of-a-kind, 3-of-a-kind, and pairs */
    int count=1, count1=1, diff_num=0,first_case_checker=0;
    for(int i=0  ; i<4 ; i++)
    {
        if(hand[0][0]!=hand[1][0]&&first_case_checker==0)
        {
            first_case_checker=1;
            continue;
        }
        if(hand[i+1][0]-hand[i][0] ==0&& diff_num==0)
        {
            count++;
        }
        else if(hand[i+1][0]-hand[i][0] ==0 &&diff_num==1)
        {
            diff_num=1;
            count1++;
        }
        else
        {
            diff_num=1;
        }
    }
    //printf("!!! %d !!!  %d \n",count,count1);
    if(count==4||count1==4)
    {
        four=true;
    }
    if(count==3||count1==3)
    {
        three=true;
    }
    if(count==2 && count1==2)
    {
        pairs=2;
    }
    else if(count==2 || count1==2)
    {
        pairs=1;
    }
}
/**********************************************************
 * print_result: Prints the classification of the hand, *
 * based on the values of the external *
 * variables straight, flush, four, three, *
 * and pairs. *
 **********************************************************/
void print_result(void)
{
    if (straight && flush) printf("Straight flush");
    else if (four) printf("Four of a kind");
    else if (three &&
             pairs == 1) printf("Full house");
    else if (flush) printf("Flush");
    else if (straight) printf("Straight");
    else if (three) printf("Three of a kind");
    else if (pairs == 2) printf("Two pairs");
    else if (pairs == 1) printf("Pair");
    else printf("High card");
    printf("\n\n");
}
