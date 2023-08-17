#include "main.h"

/**
 * _isalpha - function that checks for alphabetic character
 * @c: checks input of function
 * Return: Returns 1 if c is lowercase or uppercase
 * otherwise always 0 (success)
*/

int _isalpha(int c)
{
if (c >= 65 && c <= 90)
return (1);
if (c >= 97 && c <= 122)
return (1);
return (0);
}
