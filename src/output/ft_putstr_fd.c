/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbarba-v <dbarba-v@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/31 10:58:51 by dbarba-v          #+#    #+#             */
/*   Updated: 2025/12/05 23:46:18 by dbarba-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Write a string to a file descriptor.
 *
 * Writes the string `s` to the file descriptor `fd`. If `s` is NULL,
 * writes the literal "(null)" instead.
 *
 * @param s String to write.
 * @param fd File descriptor.
 * @return Number of characters written.
 */
int	ft_putstr_fd(char *s, int fd)
{
	int		length;

	if (!s)
		return (ft_putstr_fd("(null)", fd));
	length = ft_strlen(s);
	write(fd, s, length);
	return (length);
}
