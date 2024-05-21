/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_a_or_b.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emedina- <emedina-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 12:45:06 by emedina-          #+#    #+#             */
/*   Updated: 2024/03/05 12:19:55 by emedina-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/push_swap.h"

static long	ft_atol(const char *str)
{
	long	i;
	long	result;
	long	minus;

	i = 0;
	result = 0;
	minus = 1;
	while (str[i] == ' ' || str[i] == '\n' || str[i] == '\t' || str[i] == '\r'
		|| str[i] == '\v' || str[i] == '\f')
	{
		i++;
	}
	if (str[i] == '-')
	{
		minus = -1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return (result * minus);
}

static void	append_node(t_a_or_b **a_or_b, int n)
{
	t_a_or_b	*node;
	t_a_or_b	*last_node;

	if (!a_or_b)
		return ;
	node = ft_lstnew(n);
	if (!node)
		return ;
	node->next = NULL;
	node->data = n;
	if (!(*a_or_b))
	{
		*a_or_b = node;
		node->prev = NULL;
	}
	else
	{
		last_node = ft_lstlast(*a_or_b);
		last_node->next = node;
		node->prev = last_node;
	}
}

void	init_stack_a(t_a_or_b **a, char **argv)
{
	long	n;
	int		i;

	i = 0;
	while (argv[i])
	{
		if (error_syntax(argv[i]))
			free_errors(a);
		n = ft_atol(argv[i]);
		if (n > INT_MAX || n < INT_MIN)
			free_errors(a);
		if (error_duplicate(*a, (int)n))
			free_errors(a);
		append_node(a, (int)n);
		i++;
	}
}

t_a_or_b	*get_cheapest(t_a_or_b *a_or_b)
{
	if (!a_or_b)
		return (NULL);
	while (a_or_b)
	{
		if (a_or_b->cheapest)
			return (a_or_b);
		a_or_b = a_or_b->next;
	}
	return (NULL);
}

void	prep_for_push(t_a_or_b **a_or_b,
					t_a_or_b *top_node,
					char list_name)
{
	while (*a_or_b != top_node)
	{
		if (list_name == 'a')
		{
			if (top_node->above_median)
				ra(a_or_b);
			else
				rra(a_or_b);
		}
		else if (list_name == 'b')
		{
			if (top_node->above_median)
				rb(a_or_b);
			else
				rrb(a_or_b);
		}
	}
}
