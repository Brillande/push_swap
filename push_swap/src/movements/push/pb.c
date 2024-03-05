/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emedina- <emedina-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 13:19:23 by emedina-          #+#    #+#             */
/*   Updated: 2024/02/28 13:19:53 by emedina-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../inc/push_swap.h"

void	pb(t_a_or_b **b, t_a_or_b **a)
{
	t_a_or_b	*push_node;

	if (!*a)
		return ;
	push_node = *a;
	*a = (*a)->next;
	if (*a)
		(*a)->prev = NULL;
	if (!*b)
	{
		*b = push_node;
		push_node->next = NULL;
	}
	else
	{
		push_node->next = *b;
		push_node->next->prev = push_node;
		*b = push_node;
	}
	ft_printf("pb\n");
}
