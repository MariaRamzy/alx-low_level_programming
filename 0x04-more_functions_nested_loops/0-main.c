#include "main.h"
#include <stdio.h>

/**
 * main - check the code.
 *
 * Return: Always return 0 (Success) program stopped
 */
int main(void)
{
char c;

c = 'A';
printf("%c: %d\n", c, _isupper(c));
c = 'a';
printf("%c: %d\n", c, _isupper(c));
return (0);
}
