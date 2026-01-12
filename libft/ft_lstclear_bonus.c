/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albelmon <albelmon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 17:59:45 by albelmon          #+#    #+#             */
/*   Updated: 2025/10/17 15:47:32 by albelmon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Al hacer del borras el contenido que almacene el nodo, pero mantienes su 
referencia. Si hicieses free sin antes hacer del al contenido,
estarías perdiendo la referencia de la memoria sin haber liberado su contenido,
por lo que tendrías un "hola", flotando por la memoria. 

cpylst = (*lst)->next; //Guarda en cpylst el puntero al siguiente nodo
*lst = cpylst; //Le da a lst el puntero al siguiente nodo del que 
acabamos de borrar, este sería inaccesible si no lo hubiese guardado antes	*/

/**
 * ft_lstclear - Free an entire linked list and its contents
 *
 * @lst: Pointer to the head pointer of the list to clear (t_list **).
 * @del: Function pointer used to free the content of each
 *  node (void (*)(void*)).
 *
 * Iterates over the list starting at *lst. For each node, calls the
 * provided del function on the node's content, frees the node itself,
 * and advances to the next node. When finished, sets *lst to NULL.
 *
 * Behavior and guarantees:
 * - If lst or del is NULL, the function returns immediately
 *  and does nothing.
 * - Safe to call with an empty list (*lst == NULL).
 * - The function does not assume ownership semantics beyond calling del
 *   for each content; any additional resource cleanup must be performed
 *   by the del function.
 * - After the call completes successfully, there are no remaining nodes
 *   reachable from the original head and *lst is set to NULL.
 *
 * Example usage:
 *   ft_lstclear(&my_list, free); // frees every node and its
 *  content with free
 */
void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*cpylst;

	if (!lst || !del)
		return ;
	while (*lst != NULL)
	{
		cpylst = (*lst)->next;
		del((*lst)->content);
		free(*lst);
		*lst = cpylst;
	}
}

/* int	main(void)
{
	t_list	*lst;
	t_list	*node1;
	t_list	*node2;
	t_list	*node3;

	//Asignación de contenido a los nodos.
	lst = ft_lstnew(ft_strdup("primero"));
	node1 = ft_lstnew(ft_strdup("segundo"));
	node2 = ft_lstnew(ft_strdup("tercero"));
	node3 = ft_lstnew(ft_strdup("cuarto"));

	//Conecta los nodos entre si
	ft_lstadd_back(&lst, node1);
	ft_lstadd_back(&lst, node2);
	ft_lstadd_back(&lst, node3);

	//Printeo los nodos antes de ser borrados
	t_list	*cpylst = lst;
	printf("Nodos antes de ser borrados:\n");
	while (cpylst)
	{
		printf(" - %s\n", (char *)cpylst->content);
		cpylst = cpylst->next;
	}

	//Borro los nodos
	printf("\nAntes del clear: %p\n", (void *)lst);
	ft_lstclear(&lst, &free);
	printf("Después del clear: %p\n", (void *)lst);

	//Compruebo si han sido borrados correctamente
	if (!lst)
		printf("\nBIEN HECHO CABRA\n");
	else
		printf("\nAlgo ha fallado\n");
	return (0);
} */
