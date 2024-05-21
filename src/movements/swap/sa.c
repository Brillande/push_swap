/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emedina- <emedina-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 13:10:15 by emedina-          #+#    #+#             */
/*   Updated: 2024/02/28 13:12:54 by emedina-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../inc/push_swap.h"

void	sa(t_a_or_b **a)
{
	t_a_or_b	*scnd_nbr;
	int			c;

	if (!*a || !(*a)->next)
		return ;
	scnd_nbr = (*a)->next;
	c = (*a)->data;
	(*a)->data = scnd_nbr->data;
	scnd_nbr->data = c;
	ft_printf("sa\n");
}
