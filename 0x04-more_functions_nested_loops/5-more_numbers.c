#include "main.h"

/**
 * more_numbers - prints more numbers
 */

void more_numbers(void)
{
int i, y;

for (i = 1; i <= 10; i++)
{
for (y = 0; y <= 14; y++)
{
if (y >= 10)
_putchar('1');
_putchar(y % 10 + '0');
}
_putchar('\n');
}
}
