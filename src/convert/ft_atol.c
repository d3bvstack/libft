/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atol.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbarba-v <dbarba-v@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 15:06:06 by dbarba-v          #+#    #+#             */
/*   Updated: 2025/10/21 20:37:52 by dbarba-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

/**
 * @brief Convert a string to a long integer.
 *
 * Parses the initial portion of the string pointed to by nptr and converts
 * it to a long integer value. Handles optional leading whitespace and sign.
 *
 * @param nptr The string to convert.
 * @return The converted long integer value.
 */
long	ft_atol(const char *nptr)
{
	int		sign;
	int		i;
	long	result;

	sign = 1;
	i = 0;
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
