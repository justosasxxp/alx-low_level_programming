#include "main.h"


/**
 *_strcat - a function that concatenates two strings.
 *@dest: One of the string to be concatenated
 *@src: The second string to be concatenated
 *Return: Pointer to the given string
 */
char *_strcat(char *dest, char *src);
{
	char *p = dest;

	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0';
	return (p);
}
