
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 *
 * Description : numberz
 *
 * Return: 0 (success)
*/
int main(void)
{
int num = 0;
while (num <= 9)
{
putchar(num + 48);
if (num != 9)
{
putchar(',');
putchar(' ');
}
num = num + 1;
}
putchar('\n');
return (0);
}
