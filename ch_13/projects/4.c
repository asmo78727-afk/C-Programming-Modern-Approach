 #include<stdio.h>
 #include<string.h>
 /*
    4. Write a program named reverse.c that echoes its command-line arguments in reverse
    order. Running the program by typing
    reverse void and null
    should produce the following output:
    null and void

 */
 int main(int argc ,char *argv[]){
    //name arg1 arg2
    //printf("%s",argv[0]);
    for(int i=argc-1; i>0 ;i--)
        printf("%s ",argv[i]);

 return 0;
 }
