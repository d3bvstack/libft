/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbarba-v <dbarba-v@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/08 13:17:22 by dbarba-v          #+#    #+#             */
/*   Updated: 2025/10/21 20:58:03 by dbarba-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

/**
 * @brief Fill memory with a constant byte.
 *
 * Sets the first n bytes of the memory area pointed to by dest to the
 * specified value c.
 *
 * @param dest Pointer to the memory area to fill.
 * @param c Value to set (converted to unsigned char).
 * @param n Number of bytes to set.
 * @return Pointer to the memory area dest.
 */
void	*ft_memset(void *dest, int c, size_t n)
{
	unsigned char	*target;

	target = (unsigned char *)dest;
	while (n--)
		*target++ = (unsigned char)c;
	return (dest);
}
