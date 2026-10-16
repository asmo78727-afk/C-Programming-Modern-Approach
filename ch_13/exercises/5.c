/*
    5. (a) Write a function named capitalize that capitalizes all letters in its argument. The
    argument will be a null-terminated string containing arbitrary characters, not just letters.
    Use array subscripting to access the characters in the string. Hint: Use the toupper function to convert each character to upper-case.
    (b) Rewrite the capitalize function, this time using pointer arithmetic to access the
    characters in the string.
*/

int capitalize_a(char *a , int n){
    for(int i=0 ;i<n ;i++){
        if(a[i]>='a'&&a[i]<='z'){
            a[i]=toupper(a[i]);
        }
    }
}
int capitalize_b(char *a , int n){
    while(*a){
        //*a++=(*a>='a'&&*a<='z')?toupper(*a):*a;
        *a++=toupper(*a);

    }
}
