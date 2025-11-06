/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbarba-v <dbarba-v@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/31 10:52:47 by dbarba-v          #+#    #+#             */
/*   Updated: 2025/11/06 17:03:34 by dbarba-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

/**
 * @brief Write a string followed by a newline to a file descriptor.
 *
 * Writes the string s and a newline character to the file or stream identified
 * by fd. If s is NULL, nothing is written.
 *
 * @param s String to write.
 * @param fd File descriptor to write to.
 * @return Total characters written
 */
int	ft_putendl_fd(char *s, int fd)
{
	int i;

	i = 0;
	if (s == NULL)
		return (i);
	i += ft_putstr_fd(s, fd);
	i += ft_putchar_fd('\n', fd);
	return (i);
}
