#include "main.h"

/**
 * more_numbers - prints the numbers,from 0to9 except2,4
 *
 * Return: Always 0 (success) .
*/

void more_numbers(void)
{
int i, y;

for (i = 0; i <= 9; i++)
{
for (y = 0; y <= 14; y++)
{
if (y >= 10)
_putchar(0 + 48);
_putchar(y % 10 + '0');
}
_putchar('\n');
}
