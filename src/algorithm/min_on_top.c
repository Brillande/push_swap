/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   min_on_top.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emedina- <emedina-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 12:49:22 by emedina-          #+#    #+#             */
/*   Updated: 2024/02/28 12:50:12 by emedina-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/push_swap.h"

void	min_on_top(t_a_or_b **a)
{
	while ((*a)->data != lower_node(*a)->data)
	{
		if (lower_node(*a)->above_median)
			ra(a);
		else
			rra(a);
	}
}
