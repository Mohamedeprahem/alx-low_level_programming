#include <stdio.h>

/**
 * main - prints the number of arguments passed into it..
 * Description:  a program that prints the number of arguments passed into it.
 * @argc: arguments count
 * @argv: arguments value
 *
 * Return: always 0
*/

int main(int argc, char *argv[]_attribute_((unused)))

{
printf("%d \n", argc - 1);
return (0);
}
