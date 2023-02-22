#include <stdio.h>
#include "main.h"
/**
 * _isalpha() - check if letter alpha
 *
 * @c: the character to be checked
 *
 **/
int _isalpha(int c)
{
if (c >= 'a' && c <= 'Z')
return (1);
else
return (0);
}
