/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emedina- <emedina-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 12:53:50 by emedina-          #+#    #+#             */
/*   Updated: 2024/02/28 13:13:49 by emedina-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../inc/push_swap.h"

void	sb(t_a_or_b **b)
{
	t_a_or_b	*scnd_nbr;
	int			c;

	if (!*b || !(*b)->next)
		return ;
	scnd_nbr = (*b)->next;
	c = (*b)->data;
	(*b)->data = scnd_nbr->data;
	scnd_nbr->data = c;
	ft_printf("sb\n");
}
