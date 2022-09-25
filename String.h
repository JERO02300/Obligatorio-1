#ifndef STRING_H_INCLUDED
#define STRING_H_INCLUDED
#include "boolean.h"

const int MAX = 80;
typedef char string [MAX];

void scan (string &str);
void print (string str);
boolean streq(string str, string str1);

#endif // STRING_H_INCLUDED
