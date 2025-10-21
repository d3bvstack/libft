/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isquote.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbarba-v <dbarba-v@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/27 15:54:45 by dbarba-v          #+#    #+#             */
/*   Updated: 2025/10/21 21:05:59 by dbarba-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

/**
 * @brief Check if a character is a single or double quote.
 *
 * Determines if the given character is a single quote (') or a double
 * quote ("). Returns the character itself if it is a quote, or 0 if not.
 *
 * @param c The character to check.
 * @return The character if it is a quote, 0 otherwise.
 */
int ft_isquote(int c)
{
	if(c == '\'' || c == '\"')
		return (c);
	return (0);
}