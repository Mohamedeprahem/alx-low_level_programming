#include "main.h"
#include <stdio.h>

/**
* _strlen - returns the length of a string
*@s: string
*Retrun: length of string
*/
int _strlen(char *s)
{
int length;
for (length = 0; *s != '\0'; s++)
length++;
s++;
return (length);
}
