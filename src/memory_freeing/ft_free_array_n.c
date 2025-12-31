/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_array_n.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbarba-v <dbarba-v@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 11:17:07 by dbarba-v          #+#    #+#             */
/*   Updated: 2025/12/05 23:45:51 by dbarba-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

/**
 * @brief Frees elements of a pointer array of size n, then frees array itself.
 *
 * Iterates through an array of pointers of length n, freeing each element,
 * and finally frees the array pointer itself.
 * After freeing, each element pointer is set to NULL.
 *
 * @param array Pointer to an array of pointers to be freed. If array is NULL,
	the function does nothing.
 * @param n Number of elements in the array to be freed.
 * @return None.
 */
void	ft_free_array_n(void **array, size_t n)
{
	size_t	i;

	if (!array)
		return ;
	i = 0;
	while (i < n)
	{
		free(array[i]);
		array[i] = NULL;
		i++;
	}
	free(array);
}
