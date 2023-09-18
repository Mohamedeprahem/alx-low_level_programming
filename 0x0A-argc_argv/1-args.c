#include <stdio.h>
#include "main.h"

/**
 * main - program that prints the number of arguments
 * @args : numbers arguments
 * @argv : array
 * Return: 0
 */

int main(int args, char *argv[])
{

(void)argv;
printf("%d\n", args - 1);
return (0);
}
