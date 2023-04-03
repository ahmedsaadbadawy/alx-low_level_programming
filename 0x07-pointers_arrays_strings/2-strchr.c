#include "main.h"
/**
 * _strchr - Entry point
 * @s1: input
 * @c: input
 * Return: Always 0 (Success)
 */
char *_strchr(char *s1, char c)
{
	int i = 0;

	for (; s1[i] >= '\0'; i++)
	{
		if (s1[i] == c)
			return (&s1[i]);
	}
	return (0);
}

