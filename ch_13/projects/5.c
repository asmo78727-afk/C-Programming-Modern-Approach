#include<stdio.h>
#include<stdlib.h>
/*
   5. Write a program named sum.c that adds up its command-line arguments, which are
   assumed to be integers. Running the program by typing
   sum 8 24 62
   should produce the following output:
   Total: 94

*/
int main(int argc, char *argv[])
{
    int sum =0;
    int num ;
    for(int i=1 ; i<argc ; i++)
    {
        num=atoi(argv[i]);
        sum+=num;
    }
    printf("Total: %d",sum);
    return 0;
}
