#include <stdio.h>
/**
 * main - Prints the numbers of base 16 in lowercase
 *
 * Return: Always return 0 (Success) program stopped
 */
int main(void)
{
int num;
char letter;
for (num = 0; num < 10; num++)
putchar((num % 10) + '0');
for (letter = 'a'; letter <= 'f'; letter++)
putchar(letter);
putchar('\n');
return (0);
}
