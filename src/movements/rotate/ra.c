#include "../../../push_swap.h"

t_list *ra(t_list *a)
{
    ft_printf("\n     ra     ");

    t_list *head = a;
    t_list *last_nbr = ft_lstlast(a);
    int first_data = head->data;

    while (head->next != NULL) {
        head->data = head->next->data;
        head = head->next;
    }

    last_nbr->data = first_data;

    t_list *current = a;
    while (current != NULL)
    {
        ft_printf("\n%d", current->data);
        current = current->next;
    }
    ft_printf("\n_____________\na     |b     \n-------------");

    return a;
}