#include "main.h"

/**
* print numbers - a function that prints the numebrs, from 0 to 9,
* followed by a new line.
* Return: Always 0
*/
void print_numbers(void)
{
int i = 0;
do
{
_putchar(i + 48);
i++;
}
while (i >= 0 && i <= 9);
_putchar('\n');
}
