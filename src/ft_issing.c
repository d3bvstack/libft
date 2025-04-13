/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_issign.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbarba-v <dbarba-v@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 10:32:54 by dbarba-v          #+#    #+#             */
/*   Updated: 2025/04/10 10:33:38 by dbarba-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

/* Function declarations */
int	ft_issign(int c);

int	ft_issign(int c)
{
	if (c == '+' || c == '-')
		return (1);
	return (0);
}
