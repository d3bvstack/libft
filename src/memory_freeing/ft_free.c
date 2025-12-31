/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbarba-v <dbarba-v@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/01 12:25:20 by dbarba-v          #+#    #+#             */
/*   Updated: 2025/12/05 23:46:00 by dbarba-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

/**
 * @brief Free memory pointed to by a pointer and assign a new value.
 *
 * Frees the memory block pointed to by *old_mem and then assigns new_mem
 * to *old_mem. If old_mem or *old_mem is NULL, no action is taken.
 * Typically, new_mem is set to NULL to avoid dangling pointers.
 *
 * @param old_mem Address of the pointer to be freed and updated.
 * @param new_mem Value to assign to *old_mem after freeing.
 */
void	ft_free(void **old_mem, void *new_mem)
{
	if (old_mem && *old_mem)
	{
		free(*old_mem);
		*old_mem = new_mem;
	}
}
