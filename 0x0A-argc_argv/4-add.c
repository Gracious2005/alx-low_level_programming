#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * check_num - check string if there are digit
 * @str: array string
 * Return:  0  on Success
 */
int check_num(char *str)
{
	unsigned int length;

	length = 0;
	while (length < strlen(str))

	{
		if (!isdigit(str[length]))
		{
			return (0);
		}

		length++;
	}
	return (1);
}

/**
 * main - Print the name of program
 * @argc: Count argument
 * @argv: Argument
 * Return:  0  on Success
 */

int main(int argc, char *argv[])

{


	int length;
	int str_to_int;
	int sum = 0;

	length = 1;
	while (length < argc)
	{
		if (check_num(argv[length]))

		{
			str_to_int = atoi(argv[length]);
			sum += str_to_int;
		}

		else
		{
			printf("Error\n");
			return (1);
		}

		length++;
	}

	printf("%d\n", sum);
	return (0);
}
