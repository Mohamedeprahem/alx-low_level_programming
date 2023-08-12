#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int x = get_int ("input x :");
if (x > 0)
{
printf("is positive");
}
else if (x == 0)
{
printf("is zero");
}
else
{
printf("is negative"); 
}
}
