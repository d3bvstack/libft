/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbarba-v <dbarba-v@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/08 10:51:19 by dbarba-v          #+#    #+#             */
/*   Updated: 2025/10/21 18:47:25 by dbarba-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @brief Determines if a character is alphabetic.
 *
 * Checks whether the given character code corresponds to an uppercase or
 * lowercase letter (A-Z, a-z).
 *
 * @param c Integer value representing the character to check.
 * @return 1 if the character is alphabetic, 0 otherwise.
 */
int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (c);
	return (0);
}
