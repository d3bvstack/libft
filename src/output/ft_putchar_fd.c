/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbarba-v <dbarba-v@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/31 10:46:40 by dbarba-v          #+#    #+#             */
/*   Updated: 2025/11/06 16:56:16 by dbarba-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

/**
 * @brief Write a character to a given file descriptor.
 *
 * Writes the character c to the file or stream identified by fd.
 *
 * @param c Character to write.
 * @param fd File descriptor to write to.
 * @return 1, number of characters written.
 */
int	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
	return (1);
}
