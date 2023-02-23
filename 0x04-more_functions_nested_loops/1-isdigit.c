#include <stdio.h>

/**
 * _isdigit - returns 1 if upper
 * @c: the integer
 * Return: 1 if digit else return 0
 **/

int _isdigit(int c)
{
if (c >= 48 && c <= 57)
return (1);
else
return (0);
}
