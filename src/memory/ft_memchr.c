/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbarba-v <dbarba-v@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 11:23:11 by dbarba-v          #+#    #+#             */
/*   Updated: 2025/12/05 23:45:35 by dbarba-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Search for a byte in a memory area.
 *
 * Scans the first n bytes of the memory area pointed to by s for the first
 * occurrence of the byte c.
 *
 * @param s Pointer to the memory area to search.
 * @param c Byte value to search for (converted to unsigned char).
 * @param n Number of bytes to examine.
 * @return Pointer to the matching byte, or NULL if not found.
 */
void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t				i;
	const unsigned char	*ptr;
	unsigned char		search_char;

	i = 0;
	ptr = (const unsigned char *)s;
	search_char = (unsigned char)c;
	while (i < n)
	{
		if (ptr[i] == search_char)
			return ((void *)ptr + i);
		i++;
	}
	return (NULL);
}
