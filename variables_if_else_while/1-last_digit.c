#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main-function that giving info about last digit
* Description:displaying short info about last digit
* Return:0
**/
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
int ld = n % 10;
if (n % 10 > 5)
printf("Last digit of %d is %d and is greater than 5\n", n, ld);
if (n % 10 < 6)
printf("Last digit of %d is %d and is less than 6 and not 0\n", n, ld);
else
printf("Last digit of %d is %d and is 0 \n", n, ld);
return (0);
}
