#include <stdio.h>
#include<ctype.h>
#include<string.h>
/*
    10. Modify Programming Project 11 from Chapter 7 so that it includes the following function:
    void reverse_name(char *name);
    The function expects name to point to a string containing a first name followed by a last
    name. It modifies the string so that the last name comes first, followed by a comma, a space,
    the first initial, and a period. The original string may contain extra spaces before the first
    name, between the first and last names, and after the last name.

*/
void reverse_name(char *name){
    char lastname[100];
    //         asmaa     mohamed
    //              *
    // to clean space before name
    while(*name==' ')
        name++;
    char firstchar = *name;
    while(*name!=' ')
        name++;
    while(*name==' ')
        name++;
    while(*name!='\0' &&*name !=' ')
           name++;
        *name='\0';
    while(*name!=' ')
        name--;

    strcpy(lastname,++name);
    sprintf(name ,"%s, %c.",lastname,firstchar);
    printf("%s",name);

}
int main(void) {
	char word[200];
	printf("Enter a first and last name: ");
	fgets(word,sizeof(word),stdin);
	word[strcspn(word,"\n")]='\0';
    reverse_name(word);

    return 0;
}
