#include <stdio.h>
#include "main.h"
/**
 * main - prints the sign of a number
 *
 * Return: Always return 0 (Success) program stopped
 */
int main(void)
{
int r;
r = print_sign(98);
putchar(',');
putchar(' ');
putchar(r + '0');
putchar('\n');
r = print_sign(0);
putchar(',');
putchar(' ');
putchar(r + '0');
putchar('\n');
r = print_sign(0xff);
putchar(',');
putchar(' ');
putchar(r + '0');
putchar('\n');
r = print_sign(-1);
putchar(',');
putchar(' ');
putchar(r + '0');
putchar('\n');
return (0);
}
