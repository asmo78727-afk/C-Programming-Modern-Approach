/*
    6. Write a function named censor that modifies a string by replacing every occurrence of
    foo by xxx. For example, the string "food fool" would become "xxxd xxxl". Make
    the function as short as possible without sacrificing clarity.
*/
void sensor(char *a){
        while(*(a+2)){
            if(*a=='f' && *(a+1)=='o' && *(a+2)=='o'){
              *a='x';*(a+1)='x';*(a+2)='x';
            }
            a++;
        }
}
