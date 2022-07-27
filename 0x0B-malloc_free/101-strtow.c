#include "main.h"

char **strtow(char *str)
{
	char **s = NULL;
	int index = 0;
	int word_count = 0;
	int char_count = 0;
	int index2 = 0;

	if (str == NULL || str[0] == '\0')
	{
		return (NULL);
	}
	while (str[index] != '\0')
	{
		if ((int)str[index] == 32 && (int)str[index + 1] != 32)
		{
			word_count = word_count + 1;
		}
		index = index + 1;
	}
	word_count = word_count + 1;
	s = malloc(word_count * sizeof(char *)); 
	if (s == NULL)
	{
		return (NULL);
	}
	s[word_count - 1] = NULL; 
	index = 0;
	index2 = 0;
	while (str[index] != '\0')
	{
		if ((int)str[index] == 32 && (int)str[index + 1] != 32)
		{
			int idx = index + 1;
			int i = 0;

			char_count = 0;
			while ((int)str[idx] != 32)
			{
				char_count = char_count + 1;
				idx = idx + 1;
			}
			char_count = char_count + 1;
			s[index2] = malloc(char_count * sizeof(char));
			if (s[index2] == NULL)
			{
				return (NULL);
			}
			idx = index + 1;
			i = 0;
			while ((int)str[idx] != 32)
			{
				s[index2][i] = str[idx];
				i = i + 1;
				idx = idx + 1;
			}
			s[index2][i] = '\0';
			index2 = index2 + 1;
		}
		index = index + 1;
	}
	return (s);
} 
