/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isspace.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbarba-v <dbarba-v@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 15:07:47 by dbarba-v          #+#    #+#             */
/*   Updated: 2025/10/21 18:49:32 by dbarba-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

/**
 * @brief Check if an integer value is a whitespace character.
 *
 * Determines whether the given integer corresponds to a standard ASCII
 * whitespace character: space (32), tab (9), newline (10), vertical tab (11),
 * form feed (12), or carriage return (13).
 *
 * @param c Integer value representing a character to check.
 * @return The value of `c` if it is a whitespace character, 0 otherwise.
 */
int	ft_isspace(int c)
{
	if (c == 32 || (c >= 9 && c <= 13))
		return (c);
	return (0);
}
