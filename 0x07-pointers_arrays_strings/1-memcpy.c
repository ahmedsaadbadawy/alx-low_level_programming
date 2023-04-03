#include "main.h"
/**
 *_memcpy - a function that copies memory area
 *@distn: memory where is stored
 *@src: memory where is copied
 *@n: number of bytes
 *
 *Return: copied memory with n bytes changed
 */
char *_memcpy(char *distn, char *src, unsigned int n)
{
	int r = 0;
	int i = n;

	for (; r < i; r++)
	{
		distn[r] = src[r];
		n--;
	}
	return (distn);
}

