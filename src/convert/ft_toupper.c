/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbarba-v <dbarba-v@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 09:55:01 by dbarba-v          #+#    #+#             */
/*   Updated: 2025/10/21 20:37:52 by dbarba-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

/**
 * @brief Convert a lowercase letter to uppercase.
 *
 * If c is a lowercase ASCII letter, returns its uppercase equivalent.
 * Otherwise, returns c unchanged.
 *
 * @param c The character to convert.
 * @return The uppercase equivalent if c is lowercase, else c unchanged.
 */
int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}
