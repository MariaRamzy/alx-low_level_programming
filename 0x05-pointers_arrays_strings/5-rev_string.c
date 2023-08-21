#include <stdio.h>
#include "main.h"
/**
 * rev_string - This fuction print a string reverser
 *
 *@s: this is the pointer that point to a string
 */

void rev_string(char *s)
{
int len = 0, i = 0;
char aux;

while (s[len] != '\0')
len++;

while (i < len--)
{
aux = s[i];
s[i++] = s[len];
s[len] = aux;
}
}
