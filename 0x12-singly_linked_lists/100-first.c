#include "lists.h"
#include <stdio.h>
void _constructor(void) __attribute__ ((constructor));

/**
 * _constructor -  prints asentence before the main
 *
 * Return: void
*/
void _constructor(void)
{
printf("You're beat! and yet, you must allow,\n"
"I bore my house upon my back!\n");
}
