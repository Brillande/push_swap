/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrb.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emedina- <emedina-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 13:23:18 by emedina-          #+#    #+#             */
/*   Updated: 2024/02/28 13:24:56 by emedina-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../inc/push_swap.h"

void	rrb(t_a_or_b **b)
{
	t_a_or_b	*last;

	if (!*b || !(*b)->next)
		return ;
	last = ft_lstlast(*b);
	last->prev->next = NULL;
	last->next = *b;
	last->prev = NULL;
	*b = last;
	last->next->prev = last;
	ft_printf("rrb\n");
}
