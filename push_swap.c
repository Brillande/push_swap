/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emedina- <emedina-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 13:25:07 by emedina-          #+#    #+#             */
/*   Updated: 2024/06/03 17:38:36 by emedina-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./inc/push_swap.h"

void	freematrix(char	**ptr)
{
	int	i;

	i = -1;
	while (ptr[++i])
	{
		free(ptr[i]);
	}
	free(ptr);
}

int	main(int argc, char **argv)
{
	t_a_or_b	*a;
	t_a_or_b	*b;

	a = NULL;
	b = NULL;
	if (argc == 1 || (argc == 2 && !argv[1][0]))
		return (1);
	else if (argc == 2)
	{
		argv = ft_split(argv[1], ' ');
		init_stack_a(&a, argv);
		freematrix(argv);
	}
	else
		init_stack_a (&a, argv + 1);
	if (!is_sorted(a))
	{
		if (ft_lstsize(a) == 2)
			sa(&a);
		else if (ft_lstsize(a) == 3)
			sort_three(&a);
		else
			sort_list(&a, &b);
	}
	free_list(&a);
}
