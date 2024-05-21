/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrr.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emedina- <emedina-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 13:20:45 by emedina-          #+#    #+#             */
/*   Updated: 2024/02/28 13:22:56 by emedina-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../inc/push_swap.h"

void	rrr(t_a_or_b **a, t_a_or_b **b)
{
	t_a_or_b	*last_a;
	t_a_or_b	*last_b;

	if (!*a || !(*a)->next || !*b || !(*b)->next)
		return ;
	last_a = ft_lstlast(*a);
	last_a->prev->next = NULL;
	last_a->next = *a;
	last_a->prev = NULL;
	*a = last_a;
	last_a->next->prev = last_a;
	last_b = ft_lstlast(*b);
	last_b->prev->next = NULL;
	last_b->next = *b;
	last_b->prev = NULL;
	*b = last_b;
	last_b->next->prev = last_b;
	ft_printf("rrr\n");
}
