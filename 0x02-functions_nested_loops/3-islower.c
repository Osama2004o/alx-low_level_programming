#include <ctype.h>
#include <stdio.h>
#include "main.h"
/**
 *_islower - lower case letter
 **/
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
putchar(1);
else
putchar(0);
}
