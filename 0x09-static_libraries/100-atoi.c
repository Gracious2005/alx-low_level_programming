#include "main.h"
/**
 * _atoi - convert string to an integer.
 * @s:  string to  use not string
 * Return: integer.
 */
int _atoi(char *s)
{
 	int sign = 1, u= 0;
 	unsigned int result = 0;


 	while (!(s[u] <= '9' && s[u] >= '0') && s[u] != '\0')
 	{
 		if (s[u] == '-')
 			sign *= -1;
 		u++;
 	}
 	while (s[u] <= '9' && (s[u] >= '0' && s[u] != '\0'))
 	{
 		result = (result * 10) + (s[u] - '0');
 		u++;
 	}
 	result *= sign;
 	return (result);
 }
