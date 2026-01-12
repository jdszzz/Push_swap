/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albelmon <albelmon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 17:09:08 by albelmon          #+#    #+#             */
/*   Updated: 2025/10/17 15:36:30 by albelmon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Counts the number of nodes in a linked list
 * @param lst The beginning of the linked list
 * @return The length/number of nodes in the list
 */
int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 0;
	while (lst != NULL)
	{
		lst = lst->next;
		i++;
	}
	return (i);
}

/*int main(void)
{
    t_list *head = NULL;
    t_list *n1 = malloc(sizeof(t_list));
    t_list *n2 = malloc(sizeof(t_list));
    t_list *n3 = malloc(sizeof(t_list));

    if (!n1 || !n2 || !n3)
        return 1;

    n1->content = "Nodo1"; n1->next = NULL;
    n2->content = "Nodo2"; n2->next = NULL;
    n3->content = "Nodo3"; n3->next = NULL;

    // Construir la lista: n3 -> n2 -> n1
    n3->next = n2;
    n2->next = n1;
    head = n3;

    printf("Tamaño de la lista: %d\n", ft_lstsize(head));

    // Liberar memoria
    free(n1);
    free(n2);
    free(n3);

    return 0;
}*/
