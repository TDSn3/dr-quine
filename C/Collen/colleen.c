#include <stdio.h>
void p(char *s){printf(s,10,47,47,34,s,34,47,47);};int main(){/*1*/char *s ="#include <stdio.h>%cvoid p(char *s){printf(s,10,47,47,34,s,34,47,47);};int main(){%c*1*%cchar *s =%c%s%c; p(s);}%c%c2"; p(s);}//2