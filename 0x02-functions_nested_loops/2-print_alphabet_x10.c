#include <stdio.h>
#include "main.h"
/**
 *print_alphabet_x10 - for printing x10 alphabets
 **/
void print_alphabet_x10(void)
{
int i, j;
for (i = 0 ; i < 10 ; i++)
{
for (j = 97 ; j < 123 ; j++)
{
putchar(j);
}
putchar('\n');
}
}
