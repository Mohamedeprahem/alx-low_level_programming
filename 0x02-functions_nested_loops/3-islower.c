#include "main.h"

/**
 * _islower - function that checks for lowercase character
 * @c: checks input of function
 * Return: Returns 1 if c is lowercase
 * otherwise always 0 (success)
*/

int _islower(int c)
{

if (c >= 97 && c <= 122)
return (1);
return (0);
}
