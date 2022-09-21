#include "main.h"
#include <string.h>


/**
 *DESRCP : This function appends the src string to the dest string
 *the end of dest, and then adds a terminating null byte
 *
 *Return - a pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src);
{
	int i, lenDest, lenSrc;

	lenDest = strlen(*dest);
	lenSrc = strlen(*src);

	for (i = 0; i < lenSrc; i++)
	{
		*dest[lenDest + i] = *src[i];
	}
	*dest[lenDest + i] = '\0';
	return (dest);
}
