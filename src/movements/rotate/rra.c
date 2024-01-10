#include "../../../push_swap.h"

t_list *rra(t_list *a)
{
    ft_printf("\n     rra     ");

    t_list *last = a;
    t_list *c = NULL;

    // Encontrar el último nodo y el penúltimo nodo
    while (last->next != NULL) {
        c = last;
        last = last->next;
    }

    // Hacer que el último nodo sea el primero
    last->next = a;  // El último nodo apunta al primer nodo
    c->next = NULL;  // El penúltimo nodo ahora es el último, así que su siguiente es NULL
    a = last;        // El primer nodo ahora es el último nodo

    // Imprimir la lista después de la rotación
    t_list *current = a;
    while (current != NULL)
    {
        ft_printf("\n%d", current->data);
        current = current->next;
    }
    ft_printf("\n_____________\na     |b     \n-------------");

    return a;
}