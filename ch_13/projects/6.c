#include <stdio.h>
#include <string.h>
#include<ctype.h>
#define NUM_PLANETS 9
/*
    6. Improve the planet.c program of Section 13.7 by having it ignore case when comparing
command-line arguments with strings in the planets array
*/
int main(int argc, char *argv[])
{

    char *planets[]= {"MERCURY", "VENUS", "EARTH",
                       "MARS", "JUPITER", "SATURN",
                       "URANUS", "NEPTUNE", "PLUTO"
                      };
    int i , j;

    char **p=argv+1;
    for(;*p;p++){
        char *temp=*p;
        while(*temp){
            *temp=toupper(*temp);
            *temp++;
        }
    }


    for (i = 1; i < argc; i++)
    {
        for (j = 0; j < NUM_PLANETS; j++)
            if (strcmp(argv[i], planets[j]) == 0)
            {
                printf("%s is planet %d\n", argv[i], j + 1);
                break;
            }
            if (j == NUM_PLANETS)
                printf("%s is not a planet\n", argv[i]);
    }

    return 0;
}
