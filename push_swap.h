#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include <stdlib.h>
#include <stddef.h>

typedef struct s_list t_list;

struct s_list
{
	int     data;
	t_list  *next;
};
#endif

int	ft_atoi(const char *str);
int		ft_printf(char const *str, ...);
t_list *sa(t_list *a);
t_list *ra(t_list *a);
t_list	*ft_lstlast(t_list *lst);
void	ft_lstadd_back(t_list **lst, t_list *new);
void	ft_lstadd_front(t_list **lst, t_list *new);
t_list	*ft_lstnew(int content);
