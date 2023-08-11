#include <stdio.h>
/**
 * main - Prints alphabet letters
 * in lowercase then uppercase
 *
 * Return: Always return 0 (Success) program stopped
 */
int main(void)
{
char letter;
for (letter = 'a'; letter <= 'z'; letter++)
putchar(letter);
for (letter = 'A'; letter <= 'Z'; letter++)
putchar(letter);
putchar('\n');
return (0);
}
