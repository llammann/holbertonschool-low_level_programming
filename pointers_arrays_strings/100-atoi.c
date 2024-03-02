#include "main.h"

/**
 * _atoi - Convert a string to an integer
 * @s: The string to convert
 *
 * Return: The converted integer value
 */
int _atoi(char *s)
{
int sign = 1;
int result = 0;
int i = 0;
while (s[i] == ' ')
i++;
if (s[i] == '-')
{
sign = -1;
i++;
}
else if (s[i] == '+')
{
i++;
}
while (s[i] >= '0' && s[i] <= '9')
{
int digit = s[i] - '0';
if (result > (INT_MAX - digit) / 10)
{
if (sign == 1)
return (INT_MAX);
else
return (INT_MIN);
}
result = result * 10 + digit;
i++;
}
return (sign *result);
}
