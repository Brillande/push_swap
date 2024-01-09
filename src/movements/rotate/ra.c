#include "../../../push_swap.h"

t_list *ra(t_list *a)
{
    ft_printf("\n     ra     ");
    t_list *head = a;
    t_list *last_nbr = a;
    int c;
    while(last_nbr->next != NULL)
    {
        last_nbr = last_nbr ->next;
    }
    c = last_nbr->data;
    last_nbr->data = head->data;
    {
        last_nbr->data = c;
        c = last_nbr->data;
    }
    while(last_nbr != NULL)
    {
        ft_printf("\n%d",a->data);
        a = a->next;
    }
    ft_printf("_____________\na     |b     \n-------------");
    return(a);
}