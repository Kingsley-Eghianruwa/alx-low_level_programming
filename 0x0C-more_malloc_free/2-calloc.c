#include "main.h"

/**
 * _calloc - allocates memory for an array, using malloc.
 * @nmemb: number of elements in array.
 * @size: size of each element.
 * Return: a pointer to array or Null is nmemb = 0 or size = 0 or malloc fails.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int mem = 0;
	void *array = NULL;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	else
	{
		mem = nmemb * size;
	}
	array = malloc(mem);
	if (array == NULL)
	{
		return (NULL);
	}
	array = c_memset(array, '\0', mem);
	return ((void *)array);
}

/**
 * c_memset - set memory for _calloc
 * @p: pointer to memory block
 * @c: charater to fill block with
 * @size: total memory blocks to fill
 * Return: pointer to memory block
 */

void *c_memset(void *p, char c, unsigned int size)
{
	char *idx = NULL;

	idx = (char *)p;
	while (idx <= ((char *)p + size - 1))
	{
		*idx = c;
		idx = idx + 1;
	}
	return (p);
}
