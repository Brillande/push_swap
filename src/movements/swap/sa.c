#include "../../../push_swap.h"

t_list *sa (t_list *a)
{
    int i = 0;
    t_list *head = a;
    t_list *scnd_nbr;
    int c = 0;
    ft_printf("\n     sa     ");
    while(a != NULL)
    {
        if(i == 1)
            scnd_nbr = a;
        a = a->next;
        i++;
    }
    c = head->data;
    head->data = scnd_nbr->data;
    scnd_nbr->data = c;
    a = head;
    while(a != NULL)
    {
        ft_printf("\n%d",a->data);
        a = a->next;
    }
    ft_printf("\n_____________\na     |b     \n-------------");
    return(a);
}