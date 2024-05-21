/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   manipulate_lst.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emedina- <emedina-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 12:46:36 by emedina-          #+#    #+#             */
/*   Updated: 2024/02/28 12:46:39 by emedina-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/push_swap.h"

t_a_or_b	*ft_lstlast(t_a_or_b *lst)
{
	if (lst == NULL)
		return (NULL);
	while (lst->next != NULL)
	{
		lst = lst->next;
	}
	return (lst);
}

t_a_or_b	*ft_lstnew(int content)
{
	t_a_or_b	*new_node;

	new_node = (t_a_or_b *)malloc(sizeof(t_a_or_b));
	if (!new_node)
		return (NULL);
	new_node->data = content;
	new_node->next = NULL;
	return (new_node);
}

int	ft_lstsize(t_a_or_b *lst)
{
	int	count;

	count = 0;
	while (lst != NULL)
	{
		count++;
		lst = lst->next;
	}
	return (count);
}
