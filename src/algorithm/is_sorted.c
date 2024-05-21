/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_sorted.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emedina- <emedina-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 12:42:38 by emedina-          #+#    #+#             */
/*   Updated: 2024/02/28 12:43:12 by emedina-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/push_swap.h"

bool	is_sorted(t_a_or_b *a_or_b)
{
	if (!a_or_b)
		return (1);
	while (a_or_b->next)
	{
		if (a_or_b->data > a_or_b->next->data)
			return (false);
		a_or_b = a_or_b->next;
	}
	return (true);
}
