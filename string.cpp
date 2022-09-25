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

boolean streq(string str, string str1) {
  boolean iguales=TRUE;
  int i=0;
    do {
        if(str[i]!=str1[i]) {
          iguales=FALSE;
        }
      i++;
    } while(iguales==TRUE && str[i]!='\0' && str1[i]!='\0');

    if(iguales)
      if(str[i] != str1[i])
        iguales=FALSE;

  return iguales;
}
