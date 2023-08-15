#include <stdio.h>
/**
 * _islower - check lowercase
 * @c: an input character
 * Return: 1 if is lowercase or 0 if is uppercase
 */
int _islower(int c)
{
char letter;
int lower = 0;
for (letter = 'a'; letter <= 'z'; letter++)
{
if (letter == c)
lower = 1;
}
return (lower);
}
