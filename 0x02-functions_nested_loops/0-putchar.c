#include <stdio.h>
#include "main.h"
/**
 * main - prints _putchar
 *
 * Return: Always return 0 (Success) program stopped
 */
int main(void)
{
char c[9] = "_putchar";
int i;
for(i=0; i < 8; i++)
{
_putchar(c[i]);
}
_putchar('\n');
return (0);
}
