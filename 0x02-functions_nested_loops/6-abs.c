#include <stdio.h>
#include "main.h"
/**
 * _abs - for abs value
 *
 * @n:the int
 * Return: 1 if @n > 0 else 0
 **/
int _abs(int n)
{
if (n < 0)
return (-n);
else if (n == 0)
return (0);
else
return (n);
}
