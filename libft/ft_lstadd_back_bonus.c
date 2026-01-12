/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albelmon <albelmon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 11:58:58 by albelmon          #+#    #+#             */
/*   Updated: 2025/10/17 15:47:06 by albelmon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Adds a new node to the end of a linked list
 * 
 * This function adds a new node to the end of a linked
 *  list. If the list is empty,
 * the new node becomes the first element. 
 * If either the list pointer or the new
 * node is NULL, the function returns without doing anything.
 *
 * @param lst Double pointer to the first node of the linked list
 * @param new Pointer to the node to be added at the end of the list
 * 
 * @return None
 */
void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (!lst || !new)
		return ;
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	last = *lst;
	while (last->next != NULL)
		last = last->next;
	last->next = new;
}

/* int	main(void)
{
	t_list	*lst;
	t_list	*node1;
	t_list	*node2;
	t_list	*node3;
	t_list	*node4;

	lst = ft_lstnew("hola0");
	node1 = ft_lstnew("hola1");
	node2 = ft_lstnew("hola2");
	node3 = ft_lstnew("hola3");
	node4 = ft_lstnew("hola4");
	ft_lstadd_front(&lst, node1);
	ft_lstadd_front(&lst, node2);
	ft_lstadd_front(&lst, node3);
	ft_lstadd_back(&lst, node4);
	printf("Último nodo: %s\n", (char *)ft_lstlast(lst)->content);
	return (0);
} */
