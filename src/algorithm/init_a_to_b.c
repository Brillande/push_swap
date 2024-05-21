/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_a_to_b.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emedina- <emedina-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 12:43:38 by emedina-          #+#    #+#             */
/*   Updated: 2024/02/28 12:43:58 by emedina-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/push_swap.h"

void	current_index(t_a_or_b *a_or_b)
{
	int	i;
	int	median;

	i = 0;
	if (!a_or_b)
		return ;
	median = ft_lstsize(a_or_b) / 2;
	while (a_or_b)
	{
		a_or_b->index = i;
		if (i <= median)
			a_or_b->above_median = true;
		else
			a_or_b->above_median = false;
		a_or_b = a_or_b->next;
		++i;
	}
}

static void	set_target_a(t_a_or_b *a, t_a_or_b *b)
{
	t_a_or_b	*current_b;
	t_a_or_b	*target_node;
	long		best_match_index;

	while (a)
	{
		best_match_index = LONG_MIN;
		current_b = b;
		while (current_b)
		{
			if (current_b->data < a->data && current_b->data > best_match_index)
			{
				best_match_index = current_b->data;
				target_node = current_b;
			}
			current_b = current_b->next;
		}
		if (best_match_index == LONG_MIN)
			a->target_node = biggest_node(b);
		else
			a->target_node = target_node;
		a = a->next;
	}
}

static void	cost_analysis_a(t_a_or_b *a, t_a_or_b *b)
{
	int	len_a;
	int	len_b;

	len_a = ft_lstsize(a);
	len_b = ft_lstsize(b);
	while (a)
	{
		a->push_cost = a->index;
		if (!(a->above_median))
			a->push_cost = len_a - (a->index);
		if (a->target_node->above_median)
			a->push_cost += a->target_node->index;
		else
			a->push_cost += len_b - (a->target_node->index);
		a = a->next;
	}
}

void	set_cheapest(t_a_or_b *a_or_b)
{
	long		cheapest_value;
	t_a_or_b	*cheapest_node;

	if (!a_or_b)
		return ;
	cheapest_value = LONG_MAX;
	while (a_or_b)
	{
		if (a_or_b->push_cost < cheapest_value)
		{
			cheapest_value = a_or_b->push_cost;
			cheapest_node = a_or_b;
		}
		a_or_b = a_or_b->next;
	}
	cheapest_node->cheapest = true;
}

void	init_nodes_a(t_a_or_b *a, t_a_or_b *b)
{
	current_index(a);
	current_index(b);
	set_target_a(a, b);
	cost_analysis_a(a, b);
	set_cheapest(a);
}
