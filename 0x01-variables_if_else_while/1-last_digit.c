#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
int n,m;

srand(time(0));
n = rand() - RAND_MAX / 2;
printf("%d ", n);

if (n > 0) {
printf("is positive\n");
} else if (n == 0) {
printf("is zero\n");
} else {
printf("is negative\n");
}

printf("\n");
return (0);
}
