#include <stdio.h>
#include "main.h"

/**
 * main - program that prints the number of arguments
 * @argc : numbers arguments
 * @argv : array
 * Return: 0
 */

int main(int argc, char *argv[])
{

(void)argv;
printf("%d\n", argc - 1);
return (0);
}
