#include <stdio.h>
#define A "#include <stdio.h>%c#define A %c%s%c%c#define B %cGrace_kid.c%c%c#define C(A,B) int main(){FILE *d=fopen(B,%cw%c);fprintf(d, A, 10, 34, A, 34, 10, 34, 34, 10, 34, 34, 10, 10, 47, 47);}%c%cC(A,B)%c%c"
#define B "Grace_kid.c"
#define C(A,B) int main(){FILE *d=fopen(B,"w");fprintf(d, A, 10, 34, A, 34, 10, 34, 34, 10, 34, 34, 10, 10, 47, 47);}

C(A,B)//