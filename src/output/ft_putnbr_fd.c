/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbarba-v <dbarba-v@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 14:43:20 by dbarba-v          #+#    #+#             */
/*   Updated: 2025/11/06 16:58:37 by dbarba-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

static int	ft_count(int n)
{
	int	i;

	i = 0;
	if (n <= 0)
		i += 1;
	while (n != 0)
	{
		n /= 10;
		i += 1;
	}
	return (i);
}

/**
 * @brief Write an integer to a given file descriptor.
 *
 * Writes the integer n as a string of digits to the file or stream identified
 * by fd.
 *
 * @param n Integer to write.
 * @param fd File descriptor to write to.
 * @return Number of digits written.
 */
int	ft_putnbr_fd(int n, int fd)
{
	int	i;

	i = ft_count(n);
	if (n == -2147483648)
		ft_putstr_fd("-2147483648", fd);
	else
	{
		if (n < 0)
		{
			n = -n;
			ft_putchar_fd('-', fd);
		}
		if (n > 9)
		{
			ft_putnbr_fd(n / 10, fd);
		}
		ft_putchar_fd(n % 10 + '0', fd);
	}
	return (i);
}
