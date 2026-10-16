/*
    11. The Q&A section at the end of this chapter shows how the strcmp function might be written using array subscripting.
     Modify the function to use pointer arithmetic instead.
*/
int strcmp(char *s, char *t) {
	 int i;
	 for(;*s == *t;s++,t++){
		 if (*s == '\0')
			  return 0;
	 }
	return *s-*t;
}
