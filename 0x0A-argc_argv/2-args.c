#include <stdio.h>
/**
 * main - prints all arguments it receives
 * @argc : numbers of  arguments
 * @argv : array of arguments
 *
 * Return: 0
 */

int main(int argc, char const *argv[])
{
int x = 0;
while (argc--)
{
printf("%s\n" , argv[x]);
x++;
}
return (0);
}
