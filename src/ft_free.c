/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbarba-v <dbarba-v@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/01 12:25:20 by dbarba-v          #+#    #+#             */
/*   Updated: 2025/04/12 18:28:51 by dbarba-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

/// @brief Frees memory pointed to by old_mem and replaces it with new_mem
/// @param old_mem Pointer to a pointer to be freed and reassigned
/// @param new_mem New memory address to assign to *old_mem
void	ft_free(char **old_mem, char *new_mem)
{
	free(*old_mem);
	*old_mem = new_mem;
}