#include <ctype.h>
#include <stdio.h>
#include "main.h"
/**
  * _islower - lower case letter
  * @c: the character to be checked
  *
  * Return: 1 if @c is lowercase, 0 otherwise
 **/
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
return (1);
else
return (0);
}
