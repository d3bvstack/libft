/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbarba-v <dbarba-v@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 15:18:07 by dbarba-v          #+#    #+#             */
/*   Updated: 2025/10/21 20:37:15 by dbarba-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

/**
 * @brief Convert a string to an integer.
 *
 * Parses the initial portion of the string pointed to by `nptr`, interpreting
 * it as an integer value. Handles optional leading whitespace and an optional
 * '+' or '-' sign.
 *
 * @param nptr Pointer to the null-terminated string to convert.
 * @return The integer value represented by the string. Returns 0 if no valid
 *         conversion could be performed.
 */
int	ft_atoi(const char *nptr)
{
	int	sign;
	int	result;
	int	i;

	i = 0;
	sign = 1;
	result = 0;
	while (ft_isspace(nptr[i]))
		i++;
	if (ft_issign(nptr[i]))
	{
		if (ft_issign(nptr[i]) == 2)
			sign = -1;
		i++;
	}
	while (ft_isdigit(nptr[i]))
	{
		result = result * 10 + (nptr[i] - '0');
		i++;
	}
	return (result * sign);
}
