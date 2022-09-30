#include "main.h"

/**
 * _strstr - locates a string
 *
 * @haystack: the string to be searched
 * @needle: the substring to be lcated
 *
 * Return: if substing is located - a pointer to th beginning
 * of the located substring
 * if the substring id is not located - NULL.
 */

char *_strstr(char *haystack, char *needle)
{
	int index;

	if (*needle == 0)
		return (haystack);

	while (*haystack)
	{
		index = 0;

		if (haystack[index] == needle[index])
		{
			do {
				if (needle[index + 1] == '\0')
					return (haystack);

				index++;

			} while (haystack[index] == needle[index]);
		}

		haystack++;
	}

	return ('\0');
}
