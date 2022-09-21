#include "main.h"


/**
 *_strcat - Concatenates two strings
 *@dest: The destination string
 *@src: The source string
 *
 *Return: A character
 */
char *_strcat(char *dest, char *src);
{
	int len = 0, i;

	while (dest[len])
		len++;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[len] = scr[i];
		len += 1;
	}
	dest[len] = '\0';
	return (dest);
}
