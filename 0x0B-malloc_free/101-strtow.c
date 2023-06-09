#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/**
 * strtow - splits strings
 *
 * @str: parameter
 * Return: returns words
 */
char **strtow(char *str)
{
	int num_words, in_word, word_index, word_start, word_length, j;
	long unsigned int i;
	char **words;

	if (str == NULL || strlen(str) == 0)
		return (NULL);
	num_words = 0;
	in_word = 0;
	for (i = 0 ; i < strlen(str) ; i++)
	{
		if (!isspace(str[i]))
		{
			if (!in_word)
			{
				num_words++;
				in_word = 1;
			}
		}
		else
			in_word = 0;
	}
	words = malloc((num_words + 1) * sizeof(char *));
	if (words == NULL)
	{
		return (NULL);
	}
	word_index = 0;
	word_start = -1;
	for (i = 0 ; i < strlen(str) ; i++)
	{
		if (!isspace(str[i]))
		{
			if (word_start == -1)
			{
				word_start = i;
			}
		}
		else
		{
			if (word_start != -1)
			{
				word_length = i - word_start;
				words[word_index] = malloc((word_length + 1) * sizeof(char));
				if (words[word_index] == NULL)
				{
					for (j = 0 ; j < word_index ; j++)
					{
						free(words[j]);
					}
					free(words);
					return (NULL);
				}
				strncpy(words[word_index], str + word_start, word_length);
				words[word_index][word_length] = '\0';
				word_index++;
				word_start = -1;
			}
		}
	}
	if (word_start != -1)
	{
		word_length = strlen(str) - word_start;
		words[word_index] = malloc((word_length + 1) * sizeof(char));
		if (words[word_index] == NULL)
		{
			for (j = 0 ; j < word_index ; j++)
			{
				free(words[j]);
			}
			return (NULL);
		}
		strncpy(words[word_index], str + word_start, word_length);
		words[word_index][word_length] = '\0';
		word_index++;
	}
	words[word_index] = NULL;
	return (words);
}
