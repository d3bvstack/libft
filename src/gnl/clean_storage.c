/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   clean_storage.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbarba-v <dbarba-v@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 15:21:12 by dbarba-v          #+#    #+#             */
/*   Updated: 2025/12/05 23:44:48 by dbarba-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Cleans up strings remaining in storage
 *
 * Iterates through every position in the pointers array
 * and if it is != NULL, free the pointer and set to NULL
 *
 * @param storage The array of pointers to be freed
 * @return 0 On completed execution
 */
int	clean_storage(char **storage)
{
	int	i;

	i = -1;
	while (++i < MAX_FD)
	{
		if (storage[i])
		{
			free(storage[i]);
			storage[i] = NULL;
		}
	}
	return (0);
}
