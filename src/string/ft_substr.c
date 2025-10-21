/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbarba-v <dbarba-v@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/01 09:31:53 by dbarba-v          #+#    #+#             */
/*   Updated: 2025/10/21 22:09:12 by dbarba-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

/**
 * @brief Create a substring from a string.
 *
 * Allocates and returns a substring from source, starting at index start
 * and up to len characters.
 *
 * @param source The source string.
 * @param start The start index.
 * @param len Maximum length of the substring.
 * @return The substring, or NULL if allocation fails.
 */
char	*ft_substr(char const *source, unsigned int start, size_t len)
{
	char	*substring;
	size_t	source_len;

	if (source == NULL)
		return (NULL);
	source_len = ft_strlen(source);
	if (start >= source_len || len == 0)
		return (ft_strdup(""));
	if (len > source_len - start)
		len = source_len - start;
	substring = malloc(sizeof(char) * (len + 1));
	if (!substring)
		return (NULL);
	ft_strlcpy(substring, source + start, len + 1);
	return (substring);
}
