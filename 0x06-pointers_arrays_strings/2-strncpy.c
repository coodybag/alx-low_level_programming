#include "main.h"

/**
* _strncpy - a function that copies the strings.
* @dest: An input string
* @src: An input string
* @n: An input integer
* Return: A pointer to the resulting string
*/
char *_strncpy(char *dest, char *src, int n);
{
int srclen = 0, i = 0;
char *amp = dest, *temp = src;
while (*src)
{
srclen++;
src++;
}
srclen++;
if (n > srclen)
{
n = srclen;
}
src = temp;
for (; i < n; i++)
{
*dest++ = *src++;
}
return (amp);
}
