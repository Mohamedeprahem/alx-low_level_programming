/**
 * _strncat - a function that copies a string.
 * @dest: first value
 * @src: second value
 * @n: third value
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
int y;
y = 0;
while (y < n && src[y] != '\0')
{
dest[y] = src[y];
y++;
}
while (y < n)
{
	dest[y] = '\0';
	y++;
}

return (dest);
}
