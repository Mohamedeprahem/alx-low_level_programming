#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase
 * Descreption : prints the alphabet, in lowercas
*/

void print_alphabet_x10(void)
{
int x;
int i;
for (i = 1; i <= 10; i++)
{
for (x = 97; x <= 122; x++)
_putchar(x);
_putchar('\n');
}
}
