#include <stdio.h>
/**
 * main - Prints lowercase alphabet in reverse
 *
 * Return: Always return 0 (Success) program stopped
 */
int main(void)
{
char letter;
for (letter = 'z'; letter >= 'a'; letter--)
{
putchar(letter);
}
putchar('\n');
return (0);
}
