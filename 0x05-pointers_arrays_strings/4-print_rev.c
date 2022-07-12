#include "main.h"

/**
*print_rev - function that prints a string, in reverse
*followed by a new line.
*@s: An input string
*Return: Nothing
*/
void print_rev(char *s)
{
char *len = s;
while (*len)
len++;
len -= 1;
while (len)
{
_putchar(*s);
len--;
}
_putchar('\n');
}