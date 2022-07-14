#include "main.h"

/**
* reverse_array - a function that reverse an array.
* @a: An input array
* @n: Number of elements of an array
* Return: Nothing
*/
void reverse_array(int *a, int n)
{
int i = 0;
int temp;
while (i < n--)
{
temp = a[i];
a[i++] = a[n];
a[n] = temp;
}
}
