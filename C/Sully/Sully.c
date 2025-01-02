#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>

int main(){
int x=5;
char *source="#include <stdio.h>%c#include <stdlib.h>%c#include <string.h>%c#include <sys/stat.h>%c%cint main(){%cint x=%i;%cchar *source=%c%s%c;if (strchr(__FILE__, x+'0')!=NULL)x--;if (x>=0) {char *file_name;asprintf(&file_name,%cSully_%cd.c%c,x);FILE *fd=fopen(file_name,%cw%c);fprintf(fd, source, 10, 10, 10, 10, 10, 10, x, 10, 34, source, 34, 34, 37, 34, 34, 34, 34, 37, 34);fclose(fd);chmod(file_name,0755);char *command;asprintf(&command,%cgcc -Wall -Wextra -Werror %cs -o Sully; ./Sully%c,file_name);system(command);free(command);free(file_name);}}";if (strchr(__FILE__, x+'0')!=NULL)x--;if (x>=0) {char *file_name;asprintf(&file_name,"Sully_%d.c",x);FILE *fd=fopen(file_name,"w");fprintf(fd, source, 10, 10, 10, 10, 10, 10, x, 10, 34, source, 34, 34, 37, 34, 34, 34, 34, 37, 34);fclose(fd);chmod(file_name,0755);char *command;asprintf(&command,"gcc -Wall -Wextra -Werror %s -o Sully; ./Sully",file_name);system(command);free(command);free(file_name);}}