#include "main.h"

/**
* print numbers - a function that prints the numebrs, from 0 to 9,
* followed by a new line.
* Return: Always 0
*/
void print_numbers(void)
{
int i = '0';
for (; i <= '9'; i++)
{
_putchar(i);
}
_putchar('\n');
}
