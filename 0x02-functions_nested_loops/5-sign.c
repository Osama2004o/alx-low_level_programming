#include <stdio.h>
#include "main.h"
/**
 * print_sign - prints the sign of int
 *
 * @n: the int
 *
 * Return:1 if @n > 0
 **/
int print_sign(int n)
{
if (n > 0)
{
return (1);
putchar('+');
}
else if (n == 0)
{
return (0);
}
else
{
return (1);
putchar('-');
}
}
