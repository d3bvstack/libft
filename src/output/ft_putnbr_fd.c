/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbarba-v <dbarba-v@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 14:43:20 by dbarba-v          #+#    #+#             */
/*   Updated: 2025/10/21 20:56:51 by dbarba-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

/**
 * @brief Write an integer to a given file descriptor.
 *
 * Writes the integer n as a string of digits to the file or stream identified
 * by fd.
 *
 * @param n Integer to write.
 * @param fd File descriptor to write to.
 */
void	ft_putnbr_fd(int n, int fd)
{
	long	number;

	number = n;
	if (number < 0)
	{
		number = -number;
		ft_putchar_fd('-', fd);
	}
	if (number > 9)
	{
		ft_putnbr_fd(number / 10, fd);
	}
	ft_putchar_fd((char)(number % 10 + '0'), fd);
}
