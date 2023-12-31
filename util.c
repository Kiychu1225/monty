#include <ctype.h>
#include "monty.h"

/**
 * is_digit:this checks if a string is a digit
 * @string:this is for string to check
 * return:returns 1 if success  0 if not
 */
int is_digit(char *string)
{
	if (!string || *string == '\0')
		return (0);
	if (*string == '-')
		string++;
	while (*string)
	{
		if (isdigit(*string) == 0)
			return (0);
		string++;
	}
	return (1);
}
/**
 * isnumber:it checks if a string is a number
 * @str:thsi is a provided string
 * return:returns 1 if the string is a number, else 0.
 */
int isnumber(char *str)
{
	int i;

	if (!str)
		return (0);

	for (i = 0; str[i]; i++)
		if (i < '0' || i > '9')
			return (0);

	return (1);
}
