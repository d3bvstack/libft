/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_array2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbarba-v <dbarba-v@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 16:16:00 by dbarba-v          #+#    #+#             */
/*   Updated: 2025/11/24 15:44:24 by dbarba-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

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
