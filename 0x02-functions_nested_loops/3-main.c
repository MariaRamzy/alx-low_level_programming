#include <stdio.h>
#include "main.h"
/**
 * main - check lowercasr alphabet
 *
 * Return:  Always return 0 (Success) program stopped
 */
int main(void)
{
int r;
r = _islower('H');
_putchar(r + '0');
r = _islower('o');
_putchar(r + '0');
r = _islower(108);
_putchar(r + '0');
_putchar('\n');
return (0);
}
