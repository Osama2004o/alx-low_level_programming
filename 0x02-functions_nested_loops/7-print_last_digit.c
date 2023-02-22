#include <stdio.h>
#include "main.h"

/**
 * print_last_digit - prints last digit
 *@n: the integer
 * Return: 1 for the last digit
 **/

int print_last_digit(int n)
{
int digit = n % 10;
if (digit < 0)
digit *= -1;
_putchar(digit + '0');
return (digit);
}
