/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbarba-v <dbarba-v@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/31 15:23:52 by dbarba-v          #+#    #+#             */
/*   Updated: 2025/11/24 15:44:08 by dbarba-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

/**
 * @brief Duplicate a string using dynamic memory allocation.
 *
 * Allocates memory and copies the string s into it.
 *
 * @param s The string to duplicate.
 * @return Pointer to the new string, or NULL if allocation fails.
 */
char	*ft_strdup(const char *s)
{
	char	*new_str;
	size_t	i;

	if (s == NULL)
	{
		new_str = (char *)malloc(1);
		if (new_str != NULL)
			new_str[0] = '\0';
		return (new_str);
	}
	new_str = (char *)malloc(sizeof(char) * (ft_strlen((char *)s) + 1));
	if (!new_str)
		return (NULL);
	i = 0;
	while (s[i])
	{
		new_str[i] = s[i];
		i++;
	}
	new_str[i] = '\0';
	return (new_str);
}
