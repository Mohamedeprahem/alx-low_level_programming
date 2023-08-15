#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 *
 * Description : print alphabets
 *
 * Return: 0 (success)
*/
int main(void)
{
int number = 0;
while (number <= 9)
{
printf("%d", number);
number = number + 1;
}
printf("\n");
return (0);
}
