#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 *
 * @r: value
 * Return: r
 */

char *string_toupper(char *r)
{
int s;
for (s = 0; r[s] != '\0'; s++)
{
if (r[s] >= 97 && r[s] <= 122)
{
r[s] = r[s] - 32;
}
}
return (r);
}
