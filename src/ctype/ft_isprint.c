/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbarba-v <dbarba-v@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/08 12:11:06 by dbarba-v          #+#    #+#             */
/*   Updated: 2025/10/21 18:47:10 by dbarba-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

/**
 * @brief Determine if a value is a printable ASCII character.
 *
 * Checks whether the given integer corresponds to a printable ASCII character
 * (values in the range 32 to 126 inclusive).
 *
 * @param c Integer value to check.
 * @return 1 if `c` is printable, 0 otherwise.
 */
int	ft_isprint(int c)
{
	if ((c >= 32) && (c <= 126))
		return (c);
	return (0);
}
