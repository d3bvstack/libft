/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbarba-v <dbarba-v@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 15:36:26 by dbarba-v          #+#    #+#             */
/*   Updated: 2025/12/05 23:47:07 by dbarba-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

/**
 * @brief Find the last occurrence of a character in a string.
 *
 * Searches for the last occurrence of the character c in the string str.
 *
 * @param str The string to search.
 * @param c The character to find.
 * @return Pointer to the last occurrence of c, or NULL if not found.
 */
char	*ft_strrchr(const char *str, int c)
{
	const char	*found;

	if (str == NULL)
		return (NULL);
	found = NULL;
	while (1)
	{
		if (*str == (unsigned char)c)
			found = str;
		if (*str == '\0')
			break ;
		str++;
	}
	return ((char *)found);
}
