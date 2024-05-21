/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emedina- <emedina-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 13:20:03 by emedina-          #+#    #+#             */
/*   Updated: 2024/02/28 13:20:24 by emedina-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../inc/push_swap.h"

void	pa(t_a_or_b **a, t_a_or_b **b)
{
	t_a_or_b	*push_node;

	if (!*b)
		return ;
	push_node = *b;
	*b = (*b)->next;
	if (*b)
		(*b)->prev = NULL;
	if (!*a)
	{
		*a = push_node;
		push_node->next = NULL;
	}
	else
	{
		push_node->next = *a;
		push_node->next->prev = push_node;
		*a = push_node;
	}
	ft_printf("pa\n");
}
