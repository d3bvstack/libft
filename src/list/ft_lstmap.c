/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbarba-v <dbarba-v@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 11:24:59 by dbarba-v          #+#    #+#             */
/*   Updated: 2025/10/21 20:39:35 by dbarba-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

/**
 * @brief Create a new list by applying a function to each node's content.
 *
 * Applies the function 'f' to each node's content of the original list,
 * creating a new list with the results. If allocation fails, the new list
 * is cleared using 'del'.
 *
 * @param lst Pointer to the first node of the original list.
 * @param f Function to apply to each node's content.
 * @param del Function to delete the content if allocation fails.
 * @return Pointer to the new list, or NULL if allocation fails.
 */
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list_start;
	t_list	*temp;
	void	*new_content;

	if (lst == NULL || f == NULL || del == NULL)
		return (NULL);
	new_list_start = NULL;
	while (lst != NULL)
	{
		new_content = f(lst->content);
		temp = ft_lstnew(new_content);
		if (temp == NULL)
		{
			del(new_content);
			ft_lstclear(&new_list_start, del);
			return (NULL);
		}
		ft_lstadd_back(&new_list_start, temp);
		lst = lst->next;
	}
	return (new_list_start);
}
