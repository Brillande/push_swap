/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lower_node.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emedina- <emedina-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 12:44:16 by emedina-          #+#    #+#             */
/*   Updated: 2024/02/28 12:44:40 by emedina-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/push_swap.h"

t_a_or_b	*lower_node(t_a_or_b *a_or_b)
{
	long		min;
	t_a_or_b	*min_node;

	if (!a_or_b)
		return (NULL);
	min = LONG_MAX;
	while (a_or_b)
	{
		if (a_or_b->data < min)
		{
			min = a_or_b->data;
			min_node = a_or_b;
		}
		a_or_b = a_or_b->next;
	}
	return (min_node);
}
