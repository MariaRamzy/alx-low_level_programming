#include <stdio.h>
/**
 *print_alphabet_x10 - prints the english alphabet_x10 from a-z
 *
 *Return: nothing
 */
void print_alphabet_x10(void)
{
int i;
char letter;
for (i = 0; i < 10; i++)
{
for (letter = 'a'; letter <= 'z'; letter++)
{
putchar(letter);
}
putchar('\n');
}
}
