#include <stdio.h>
#include "main.h"


/**
 *   print_9_times_table - Prints the 9 times table, starting with 0
 *
 *   Return: void
 **/
void print_9_times_table(void)
{
int i;
for (i = 0; i <= 10; i++)
{
printf("9 x %d = %d\n", i, 9 * i);
}
}
