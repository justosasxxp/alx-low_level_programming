#include "main.h"


/**
 *_strncat - This function concatenate two strings
 *@dest: The the parameter is passed by reference
 *@src: This is passed by reference
 *
 *
 *Return: Dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;
	for (i = 0; dest[i] != '\0'; i++)
	{
		i++;
	}
	for (j = 0; j < n && src[j] != '\0'; j++)
	{
		dest[i + j] = src[j];
	}
	return (dest);
}
