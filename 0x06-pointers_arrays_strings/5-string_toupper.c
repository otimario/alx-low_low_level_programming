#include "main.h"

/**
 * string_toupper - changes all lowercase letters
 * @str:mThe string to be changed
 * Return: A pointer to the changed string
 *
 */

char *string_toupper(char *str)
{
	int index = 0;

	while (str[index])
	{
		if  (str[index] >= 'a' && str[index] <= 'z')
		str[index] -= 32;
		index++;
	}
	return (str);
}
