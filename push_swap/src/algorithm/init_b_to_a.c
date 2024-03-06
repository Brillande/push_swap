/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_b_to_a.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emedina- <emedina-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 12:51:38 by emedina-          #+#    #+#             */
/*   Updated: 2024/03/05 13:25:27 by emedina-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/push_swap.h"

static void	set_target_b(t_a_or_b *a, t_a_or_b *b)
{
	t_a_or_b	*current_a;
	t_a_or_b	*target_node;
	long		best_match_index;

	while (b)
	{
		best_match_index = LONG_MAX;
		current_a = a;
		while (current_a)
		{
			if (current_a->data > b->data && current_a->data < best_match_index)
			{
				best_match_index = current_a->data;
				target_node = current_a;
			}
			current_a = current_a->next;
		}
		if (best_match_index == LONG_MAX)
			b->target_node = lower_node(a);
		else
			b->target_node = target_node;
		b = b->next;
	}
}

void	init_nodes_b(t_a_or_b *a, t_a_or_b *b)
{
	current_index(a);
	current_index(b);
	set_target_b(a, b);
}
