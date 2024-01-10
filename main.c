#include "push_swap.h"

t_list *get_numbers(char *str) {
    int number = ft_atoi(str);
    t_list *new_node = ft_lstnew(number);
    return new_node;
}

int main(int ac, char **av) {
    t_list *a = NULL; // Lista enlazada que contendrá todos los números

    int i = 1;
    while (i < ac) {
        t_list *new_node = get_numbers(av[i]); // Obtiene un nuevo nodo con el número correspondiente
        if (new_node == NULL) {
            // Manejar el error si get_numbers falla
            // (por ejemplo, imprimir un mensaje de error, liberar memoria y salir del programa)
            return 1;
        }

        ft_lstadd_back(&a, new_node); // Agrega el nuevo nodo al final de la lista 'a'

        i++;
    }

    // Imprime el contenido de la lista
    t_list *current = a;
    while (current != NULL) {
        ft_printf("%d\n", current->data); // Imprime el dato del nodo actual
        current = current->next; // Avanza al siguiente nodo
    }

    ft_printf("_____________\na     |b     \n-------------");

    // Llamada a las funciones sa y ra, ajusta esto dependiendo de tu implementación real
    // Ejemplo:
    sa(a);
    ra(a);
    rra(a);

    // Liberar memoria (depende de la implementación real)
    // Aquí deberías tener una función que libere la memoria de la lista

    return 0;
}