#include "main.h"

/**
 * print_most_numbers  - prints the numbers,from 0to9 except2,4
 *
 * Return: always 0 (success) .
*/

void print_most_numbers(void)
{
int i;

for (i = 48; i <= 57; i++)
{
if (i == 50; || i == 52)
continue;
_putchar(i);
}
_putchar('\n');
}
