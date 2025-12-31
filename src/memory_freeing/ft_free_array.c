/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_array.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbarba-v <dbarba-v@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 11:17:07 by dbarba-v          #+#    #+#             */
/*   Updated: 2025/12/05 23:45:54 by dbarba-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

/**
 * @brief Frees elements of a null-terminated array, then frees array itself.
 *
 * Iterates through a null-terminated array of pointers, freeing each element,
 * and finally frees the array pointer.
 * After freeing, each element pointer is set to NULL.
 *
 * @param array Pointer to a null-terminated array of pointers to be freed.
 *              If array is NULL, the function does nothing.
 * @return None.
 */
void	ft_free_array(void **array)
{
	size_t	i;

	if (!array)
		return ;
	i = 0;
	while (array[i])
	{
		free(array[i]);
		array[i] = NULL;
		i++;
	}
	free(array);
}
