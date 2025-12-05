/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_issing.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbarba-v <dbarba-v@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 10:32:54 by dbarba-v          #+#    #+#             */
/*   Updated: 2025/10/21 18:49:04 by dbarba-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @brief Check if a character is a sign ('+' or '-').
 *
 * Determines if the given integer value corresponds to a plus ('+') or
 * minus ('-') character.
 *
 * @param c Integer value representing a character to check.
 * @return The character itself if it is '+' or '-', 0 otherwise.
 */
int	ft_issign(int c)
{
	if (c == '+' || c == '-')
		return (c);
	return (0);
}
