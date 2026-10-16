/*
   4. Modify the read_line function in each of the following ways:
    a) Have it skip white space before beginning to store input characters.
    (b) Have it stop reading at the first white-space character. Hint: To determine whether or
    not a character is white space, call the isspace function.
    (c) Have it stop reading at the first new-line character, then store the new-line character in
    the string.
    (d) Have it leave behind characters that it doesn’t have room to store.
*/

int read_line_a(char str[], int n) {
	 int ch, i = 0;
	 while ((ch = getchar()) == ' ')
		 ;
	 do{
		 if (i < n)
			 str[i++] = ch;
	 }while ((ch = getchar()) != '\n') ;
		 str[i] = '\0';
	  return i;
}
int read_line_b(char str[], int n)
{
    int ch, i = 0;
    while ((ch = getchar()) == ' ');
        ;
    do
    {
        if (i < n)
            str[i++] = ch;
    }
    while ((ch = getchar()) != '\n' && !isspace(ch)) ;
    while(getchar()!='\n');
    str[i] = '\0';
    return i;
}
int read_line_c(char str[], int n)
{
    int ch, i = 0;
    while ((ch = getchar()) == ' ');
        ;
    do
    {
        ch = getchar();
        if (i < n)
            str[i++] = ch;
    }
    while ( ch != '\n' ) ;
    str[i] = '\0';
    return i;
}
int read_line_d(char str[], int n)
{
    int ch, i = 0;
    while ((ch = getchar()) == ' ');
        ;
    do
    {
        ch = getchar();
        if (i < n)
            str[i++] = ch;
    }
    while ( ch != '\n' && i<n ) ;
    str[i] = '\0';
    return i;
}
