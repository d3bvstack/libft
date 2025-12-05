/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbarba-v <dbarba-v@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 10:16:17 by dbarba-v          #+#    #+#             */
/*   Updated: 2025/10/21 20:37:52 by dbarba-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @brief Convert an uppercase letter to lowercase.
 *
 * If c is an uppercase ASCII letter, returns its lowercase equivalent.
 * Otherwise, returns c unchanged.
 *
 * @param c The character to convert.
 * @return The lowercase equivalent if c is uppercase, else c unchanged.
 */
int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	return (c);
}
