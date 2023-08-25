#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 *
 * @r: ptr
 * Return: r
 */

char *string_toupper(char *r)
{
int s;
for (s = 0, str[s] != '\0'; s++)
{
if (str[s] >= 97 && str[s] <= 122)
{
str[s] = str[s] - 32;
}
}
return (r);
}
