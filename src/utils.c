#include "utils.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#define Max 1000


void mysh_parse_command(const char* command,
                        int *argc, char*** argv)
{
int i =0;
*argv = (char**)malloc(40);

char temp[Max];
char * token;
strcpy(temp, command);
token = strtok(temp, " \n\t");

while (token != NULL) {
*(*argv+i)=(char*)malloc(40);
strcpy(*(*argv+i), token);
i++;
token = strtok(NULL, " \n\t");
}
if ( i==0) {(*argv)[0]=(char*)malloc(4); *argc=1; }
else *argc =i;

/*printf("# of token : %d \n", i);
if(argc != NULL) {*argc=i; printf("success and argc : %d \n", *argc);
printf("%s, %s \n", (*argv)[0], (*argv)[1]);
 } */

return;
}
