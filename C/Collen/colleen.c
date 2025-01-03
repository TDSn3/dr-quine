#include <stdio.h>
void p(char *s){printf(s,10,10,10,10,9,10,10,34,s,34,10,10,9,10);};
int main(){
/*
	1
*/
char *s ="#include <stdio.h>%cvoid p(char *s){printf(s,10,47,47,34,s,34);};%cint main(){%c/*%c%c1%c*/%cchar *s =%c%s%c; p(s);}%c/*%c%c2%c*/"; p(s);}
/*
	2
*/