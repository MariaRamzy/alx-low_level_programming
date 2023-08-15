#include <stdio.h>
#include "main.h"
/**
 * main - computes the absolute value of an integer
 *
 * Return: Always return 0 (Success) program stopped
 */
int main(void)
{
int r;
r = _abs(-1);
printf("%d\n", r);
r = _abs(0);
printf("%d\n", r);
r = _abs(1);
printf("%d\n", r);
r = _abs(-98);
printf("%d\n", r);
return (0);
}
