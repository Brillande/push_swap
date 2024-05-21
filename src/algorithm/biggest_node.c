/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   biggest_node.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emedina- <emedina-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 12:51:16 by emedina-          #+#    #+#             */
/*   Updated: 2024/03/05 13:05:44 by emedina-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/push_swap.h"

t_a_or_b	*biggest_node(t_a_or_b *a_or_b)
{
	long		max;
	t_a_or_b	*max_node;

	if (!a_or_b)
		return (NULL);
	max = LONG_MIN;
	while (a_or_b)
	{
		if (a_or_b->data > max)
		{
			max = a_or_b->data;
			max_node = a_or_b;
		}
		a_or_b = a_or_b->next;
	}
	return (max_node);
}
