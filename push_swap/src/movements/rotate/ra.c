/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ra.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emedina- <emedina-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 13:14:39 by emedina-          #+#    #+#             */
/*   Updated: 2024/02/28 13:17:32 by emedina-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../inc/push_swap.h"

void	ra(t_a_or_b **a)
{
	t_a_or_b	*last_node;

	if (!*a || !(*a)->next)
		return ;
	last_node = ft_lstlast(*a);
	last_node->next = *a;
	*a = (*a)->next;
	(*a)->prev = NULL;
	last_node->next->prev = last_node;
	last_node->next->next = NULL;
	ft_printf("ra\n");
}
