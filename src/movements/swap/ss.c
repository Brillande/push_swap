/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ss.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emedina- <emedina-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 12:52:43 by emedina-          #+#    #+#             */
/*   Updated: 2024/02/28 13:08:34 by emedina-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../inc/push_swap.h"

void	ss(t_a_or_b **a, t_a_or_b **b)
{
	t_a_or_b	*scnd_nbr_a;
	t_a_or_b	*scnd_nbr_b;
	int			c_b;
	int			c_a;

	if (!*a || !(*a)->next || !*b || !(*b)->next)
		return ;
	scnd_nbr_a = (*a)->next;
	c_a = (*a)->data;
	(*a)->data = scnd_nbr_a->data;
	scnd_nbr_a->data = c_a;
	scnd_nbr_b = (*b)->next;
	c_b = (*b)->data;
	(*b)->data = scnd_nbr_b->data;
	scnd_nbr_b->data = c_b;
	ft_printf("ss\n");
}
