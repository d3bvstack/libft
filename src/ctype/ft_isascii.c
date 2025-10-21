/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbarba-v <dbarba-v@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/08 11:58:20 by dbarba-v          #+#    #+#             */
/*   Updated: 2025/10/21 18:47:21 by dbarba-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

/**
 * @brief Determine if a value is an ASCII character code.
 *
 * Checks whether the given integer corresponds to a valid ASCII character
 * (values in the range 0 to 127 inclusive).
 *
 * @param c Integer value to check.
 * @return 1 if `c` is an ASCII character code, 0 otherwise.
 */
int	ft_isascii(int c)
{
	if ((c >= 0) && (c <= 127))
		return (c);
	return (0);
}
