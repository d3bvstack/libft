/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbarba-v <dbarba-v@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/31 10:58:51 by dbarba-v          #+#    #+#             */
/*   Updated: 2025/10/21 20:56:49 by dbarba-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

/**
 * @brief Write a string to a given file descriptor.
 *
 * Writes the string s to the file or stream identified by fd. If s is NULL,
 * nothing is written.
 *
 * @param s String to write.
 * @param fd File descriptor to write to.
 */
void	ft_putstr_fd(char *s, int fd)
{
	if (s == NULL)
		return ;
	write(fd, s, ft_strlen(s));
}
