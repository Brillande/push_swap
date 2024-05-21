/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emedina- <emedina-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 12:42:19 by emedina-          #+#    #+#             */
/*   Updated: 2024/03/04 12:21:06 by emedina-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/push_swap.h"

int	error_syntax(char *str_n)
{
	if (!(*str_n == '+' || *str_n == '-' || (*str_n >= '0' && *str_n <= '9')))
		return (1);
	if ((*str_n == '+' || *str_n == '-') && !(str_n[1] >= '0'
			&& str_n[1] <= '9'))
		return (1);
	while (*++str_n)
	{
		if (!(*str_n >= '0' && *str_n <= '9'))
			return (1);
	}
	return (0);
}

int	error_duplicate(t_a_or_b *a, int n)
{
	if (!a)
		return (0);
	while (a)
	{
		if (a->data == n)
			return (1);
		a = a->next;
	}
	return (0);
}

void	free_list(t_a_or_b **list)
{
	t_a_or_b	*tmp;
	t_a_or_b	*current;

	if (!list)
		return ;
	current = *list;
	while (current)
	{
		tmp = current->next;
		current->data = 0;
		free(current);
		current = tmp;
	}
	*list = NULL;
}

void	free_errors(t_a_or_b **a)
{
	free_list(a);
	ft_printf("Error\n");
	exit(1);
}
