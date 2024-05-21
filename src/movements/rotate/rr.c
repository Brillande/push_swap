/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rr.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emedina- <emedina-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 13:15:44 by emedina-          #+#    #+#             */
/*   Updated: 2024/02/28 13:16:35 by emedina-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../inc/push_swap.h"

void	rr(t_a_or_b **a, t_a_or_b **b)
{
	t_a_or_b	*last_node_a;
	t_a_or_b	*last_node_b;

	if (!*a || !(*a)->next || !*b || !(*b)->next)
		return ;
	last_node_a = ft_lstlast(*a);
	last_node_a->next = *a;
	*a = (*a)->next;
	(*a)->prev = NULL;
	last_node_a->next->prev = last_node_a;
	last_node_a->next->next = NULL;
	last_node_b = ft_lstlast(*b);
	last_node_b->next = *b;
	*b = (*b)->next;
	(*b)->prev = NULL;
	last_node_b->next->prev = last_node_b;
	last_node_b->next->next = NULL;
	ft_printf("rr\n");
}
