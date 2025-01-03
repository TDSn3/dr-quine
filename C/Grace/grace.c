#include <stdio.h>
#define A "#include <stdio.h>%c#define A %c%s%c%c#define B %cGrace_kid.c%c%c#define FT(A,B) int main(){FILE *d=fopen(B,%cw%c);fprintf(d, A, 10, 34, A, 34, 10, 34, 34, 10, 34, 34, 10, 10, 10, 9, 10, 10, 10);fclose(d);}%c%c/*%c%cC%c*/%c%cFT(A,B)"
#define B "Grace_kid.c"
#define FT(A,B) int main(){FILE *d=fopen(B,"w");fprintf(d, A, 10, 34, A, 34, 10, 34, 34, 10, 34, 34, 10, 10, 10, 9, 10, 10, 10);fclose(d);}

/*
	C
*/

FT(A,B)