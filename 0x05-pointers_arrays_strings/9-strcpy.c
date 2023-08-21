#include "main.h"

/**
 * *_strcpy - copies the string pointed to by src
 * @dest: string
 * @stc: string
 * Return: pointer to dest
 */

char *_strcpy(char *dest, char *stc)
{
	int i = -1;

	do {
		i++;
		dest[i] = stc[i];
	} while (src[i] != '\0');

	return (dest);
}
