#include "main.h"


/**
 *_strcat - Concatenates two strings
 *@dest: The destination string
 *@src: The source string
 *
 *Return: A pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src);
{
	while (*dest != '\0')
		destination++;
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';

	return (dest);
}
