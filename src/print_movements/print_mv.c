#include "../../push_swap.h"

void print_mv(t_list *a)
{
     while (a != NULL)
    {
        ft_printf("\n%d", a->data);
        a = a->next;
    }
    ft_printf("\n_____________\na     |b     \n-------------");
}