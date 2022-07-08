#include "main.h"

/**
* print_numbers  - print 0 - 9.
* only using _putchar twice
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
