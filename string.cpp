#include <stdio.h>
#include "string.h"

void scan (string &str){
int i=0;
char ch;
fflush(stdin);
scanf("%c", &ch);
while (ch!='\n' &&  i<MAX-1){
    str[i]=ch;
    scanf("%c", &ch);
    i++;
    }
    str[i]='\0';
}


void print(string str){
int i=0;
while (str [i] != '\0'){

printf("%c", str[i]);
i++;
}
}
