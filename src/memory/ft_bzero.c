/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbarba-v <dbarba-v@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/31 09:23:19 by dbarba-v          #+#    #+#             */
/*   Updated: 2025/12/05 23:45:28 by dbarba-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

/**
 * @brief Set a block of memory to zero.
 *
 * Sets the first n bytes of the memory area pointed to by s to zero.
 *
 * @param s Pointer to the memory area to zero.
 * @param n Number of bytes to set to zero.
 */
void	ft_bzero(void *s, size_t n)
{
	size_t	i;
	char	*ptr;

	if (!s)
		return ;
	ptr = (char *)s;
	i = 0;
	while (i < n)
	{
		ptr[i++] = 0;
	}
	return ;
}
