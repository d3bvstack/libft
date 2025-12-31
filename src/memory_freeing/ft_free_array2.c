/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_array2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbarba-v <dbarba-v@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 16:16:00 by dbarba-v          #+#    #+#             */
/*   Updated: 2025/12/05 23:45:57 by dbarba-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

/**
 * @brief Frees a null-terminated 2D array and all its sub-arrays.
 *
 * This function iterates through a null-terminated array of pointers,
 * frees each sub-array using ft_free_array, then frees the main array itself.
 *
 * @param array Pointer to a null-terminated array of pointers to arrays.
 *              The array and all its sub-arrays will be freed.
 */
void	ft_free_array2(void ***array)
{
	size_t	i;

	if (!array)
		return ;
	i = 0;
	while (array[i])
	{
		ft_free_array(array[i]);
		array[i] = NULL;
		i++;
	}
	free(array);
}
