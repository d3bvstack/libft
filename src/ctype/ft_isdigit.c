/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbarba-v <dbarba-v@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 10:11:56 by dbarba-v          #+#    #+#             */
/*   Updated: 2025/10/21 18:47:18 by dbarba-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

/**
 * @brief Determine if a value is a decimal digit character.
 *
 * Checks whether the given integer corresponds to an ASCII digit ('0' to '9').
 *
 * @param c Integer value to check.
 * @return 1 if `c` is a digit character, 0 otherwise.
 */
int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (c);
	return (0);
}
