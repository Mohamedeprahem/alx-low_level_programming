#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 *main - Entry point
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
int x = get_int ("input x :");
if (x > 0)
{
printf("%d is positive\n" x);
}
else if (x == 0)
{
printf("%d is zero\n" x);
}
else
{
printf("%d is negative\n" x);
}
return (0);
}