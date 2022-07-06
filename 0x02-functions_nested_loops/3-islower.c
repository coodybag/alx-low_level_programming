#include "main.h"
/**
*_islower - Check description
*@c: the input character
*Description: Uses _putchar function to print
*alphabet in lowercase 10 times
*Return:1 if its lowercase or 0 if its uppercase
*/
int _islower(int c)
{
char i;
int lower = 0;
for (i = 'a'; i <= 'z'; i++)
{
if (i == c)
lower = 1;
}
return (lower);
}
