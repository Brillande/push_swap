/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emedina- <emedina-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 13:17:51 by emedina-          #+#    #+#             */
/*   Updated: 2024/02/28 13:18:56 by emedina-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../inc/push_swap.h"

void	rb(t_a_or_b **b)
{
	t_a_or_b	*last_node;

	if (!*b || !(*b)->next)
		return ;
	last_node = ft_lstlast(*b);
	last_node->next = *b;
	*b = (*b)->next;
	(*b)->prev = NULL;
	last_node->next->prev = last_node;
	last_node->next->next = NULL;
	ft_printf("rb\n");
}
