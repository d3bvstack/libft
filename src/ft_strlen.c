/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbarba-v <dbarba-v@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/31 11:15:07 by dbarba-v          #+#    #+#             */
/*   Updated: 2025/04/01 16:12:03 by dbarba-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

/// @brief Count the length of a string.
/// @param s String passed to be parsed.
/// @return Length of the passed string
size_t	ft_strlen(char *s)
{
	size_t	i;

	i = 0;
	if (!s || !*s)
		return (i);
	while (s[i])
	{
		i++;
	}
	return (i);
}
