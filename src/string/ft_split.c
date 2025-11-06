/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbarba-v <dbarba-v@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/31 11:20:07 by dbarba-v          #+#    #+#             */
/*   Updated: 2025/11/06 10:45:01 by dbarba-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

/**
 * @brief Free a string array and return NULL.
 *
 * Frees all strings in the array up to index j, then frees the array itself.
 *
 * @param array The array to free.
 * @param j Last valid index to free.
 * @return NULL pointer.
 */
static char	**free_array(char **array, int j)
{
	while (j >= 0)
	{
		free(array[j]);
		j--;
	}
	free(array);
	array = NULL;
	return (array);
}

/**
 * @brief Calculate the length of a word in a string.
 *
 * Returns the number of characters in the word starting at s, ending at
 * character c or null terminator.
 *
 * @param s Pointer to the start of the word.
 * @param c Delimiter character.
 * @return Number of characters in the word.
 */
static size_t	word_len(char *s, char c)
{
	size_t	i;

	i = 0;
	while (s[i] && s[i] != c)
	i++;
	return (i);
}

/**
 * @brief Fill an array with words split from a string.
 *
 * Splits s by delimiter c and fills o_array with the resulting words.
 *
 * @param o_array Pre-allocated array to fill.
 * @param s String to split.
 * @param c Delimiter character.
 * @return Array filled with words, or NULL on failure.
 */
static char	**fill_array(char **o_array, char *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	len;

	i = 0;
	j = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (!s[i])
			break ;
		len = word_len(s + i, c);
		o_array[j] = malloc(sizeof(char) * (len + 1));
		if (!o_array[j])
		{
			free_array(o_array, j - 1);
			return NULL;
		}
		ft_strlcpy(o_array[j], s + i, len + 1);
		j++;
		i += len;
	}
	o_array[j] = NULL;
	return (o_array);
}

/**
 * @brief Count the number of words in a string separated by a delimiter.
 *
 * Counts the number of words in s separated by character c.
 *
 * @param s String to parse.
 * @param c Delimiter character.
 * @return Number of words found.
 */
static size_t	word_count(char *s, char c)
{
	size_t	i;
	size_t	count;
	bool	in_word;

	i = 0;
	count = 0;
	in_word = false;
	while (s[i])
	{
		if (s[i] != c && !in_word)
		{
			in_word = true;
			count++;
		}
		else if (s[i] == c)
		{
			in_word = false;
		}
		i++;
	}
	return (count);
}

/**
 * @brief Split a string into an array of words.
 *
 * Allocates and returns an array of strings obtained by splitting s using
 * delimiter c.
 *
 * @param s String to split.
 * @param c Delimiter character.
 * @return Array of strings, or NULL on failure.
 */
char	**ft_split(char *s, char c)
{
	size_t	words;
	char	**array;

	if (s == NULL)
		return (NULL);
	words = word_count(s, c);
	array = (char **)malloc(sizeof(char *) * (words + 1));
	if (!array)
		return (NULL);
	array = fill_array(array, s, c);
	if (array == NULL || array[0] == NULL)
	{
		free_array(array, words - 1);
		return (NULL);
	}
	return (array);
}
