/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emedina- <emedina-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 13:25:50 by emedina-          #+#    #+#             */
/*   Updated: 2024/03/06 12:35:17 by emedina-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/libft.h"
# include "../printf/ft_printf.h"
# include <limits.h>
# include <stdbool.h>

typedef struct s_a_or_b
{
	int				data;
	int				index;
	int				push_cost;
	bool			above_median;
	bool			cheapest;
	struct s_a_or_b	*target_node;
	struct s_a_or_b	*next;
	struct s_a_or_b	*prev;
}					t_a_or_b;

int					error_syntax(char *str_n);
int					error_duplicate(t_a_or_b *a, int n);
void				free_list(t_a_or_b **a_or_b);
void				free_errors(t_a_or_b **a);
void				init_stack_a(t_a_or_b **a, char **argv);
char				**ft_split(char const *s, char c);
void				init_nodes_a(t_a_or_b *a, t_a_or_b *b);
void				init_nodes_b(t_a_or_b *a, t_a_or_b *b);
void				current_index(t_a_or_b *a_or_b);
void				prep_for_push(t_a_or_b **s, t_a_or_b *n, char list_name);
bool				stack_sorted(t_a_or_b *a_or_b);
bool				is_sorted(t_a_or_b *a_or_b);
t_a_or_b			*biggest_node(t_a_or_b *a_or_b);
t_a_or_b			*lower_node(t_a_or_b *a_or_b);
void				sa(t_a_or_b **a);
void				sb(t_a_or_b **b);
void				ss(t_a_or_b **a, t_a_or_b **b);
void				ra(t_a_or_b **a);
void				rb(t_a_or_b **b);
void				rr(t_a_or_b **a, t_a_or_b **b);
void				rra(t_a_or_b **a);
void				rrb(t_a_or_b **b);
void				rrr(t_a_or_b **a, t_a_or_b **b);
void				pa(t_a_or_b **a, t_a_or_b **b);
void				pb(t_a_or_b **b, t_a_or_b **a);
void				sort_three(t_a_or_b **a);
void				sort_list(t_a_or_b **a, t_a_or_b **b);
t_a_or_b			*ft_lstlast(t_a_or_b *lst);
void				ft_lstadd_front(t_a_or_b **lst, t_a_or_b *new);
void				ft_lstdelone(t_a_or_b *lst, void (*del)(void *));
t_a_or_b			*ft_lstnew(int value);
int					ft_lstsize(t_a_or_b *lst);
void				ft_lstadd_back(t_a_or_b **lst, t_a_or_b *new);
t_a_or_b			*get_cheapest(t_a_or_b *a_or_b);
void				min_on_top(t_a_or_b **a);

#endif