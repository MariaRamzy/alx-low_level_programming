#include <stdio.h>
/**
 *print_alphabet - prints the english alphabet from a-z
 *
 *Return: nothing
 */
void print_alphabet(void)
{
char letter;
for (letter = 'a'; letter <= 'z'; letter++)
{
putchar(letter);
}
putchar('\n');
}
