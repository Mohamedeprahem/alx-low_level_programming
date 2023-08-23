#include "main.h"
#include <stdio.h>

/**
* print_rev -  prints a string,in reverse,followed by a new line
*
* @s : string to print
*
* Retrun: void
*/
void print_rev(char *s);
{
int z = 0;
while (s[z])
z++;
while (z--)
_putchar(s[z]);
_putchar('\n');
}
