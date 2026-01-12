/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albelmon <albelmon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 15:56:54 by albelmon          #+#    #+#             */
/*   Updated: 2025/10/17 15:33:09 by albelmon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Toma como parámetro un nodo ’lst’ y libera la
memoria del contenido utilizando la función ’del’
dada como parámetro, además de liberar el nodo. La
memoria de ’next’ no debe liberarse */

/**
 * Deletes a single node from a linked list and frees its memory
 * 
 * @param lst  The node to be deleted
 * @param del  The function pointer used to delete the content of the node
 * 
 * This function takes a node and a deletion function as parameters.
 * It first checks if both parameters are valid (non-NULL).
 * Then it uses the deletion function to free the content of the node,
 * and finally frees the memory allocated for the node itself.
 * Note that this function does not handle the linking of the remaining nodes.
 */
void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
}

/* int main(void)
{
   	t_list *list = NULL;

	t_list *node1 = ft_lstnew(ft_strdup("Primer nodo"));
	t_list *node2 = ft_lstnew(ft_strdup("Segundo nodo"));
	t_list *node3 = ft_lstnew(ft_strdup("Tercer nodo"));

	ft_lstadd_back(&list, node1);
	ft_lstadd_back(&list, node2);
	ft_lstadd_back(&list, node3);

	t_list *list2 = list;

	while (list2)
	{
		printf("%s\n", (char *)list2-> content);
		list = list2->next;
		ft_lstdelone(list2, &free);
		list2 = list;
	}

	if (list2 == NULL)
	{
		printf("Se han eliminado los nodos\n");
	}
	else
	{
		printf("No se han eliminado todos los nodos\n");
	}
	return (0);
} */
