/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbarba-v <dbarba-v@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/31 10:58:51 by dbarba-v          #+#    #+#             */
/*   Updated: 2025/11/06 17:00:55 by dbarba-v         ###   ########.fr       */
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
 * @return Number of characters written.
 */
int	ft_putstr_fd(char *s, int fd)
{
	char	*ptr;
	int		i;

	if (!s)
		return (ft_putstr_fd("(null)", fd));
	ptr = s;
	i = 0;
	while (*ptr != '\0')
	{
		write(fd, ptr, 1);
		ptr++;
		i++;
	}
	return (i);
}
