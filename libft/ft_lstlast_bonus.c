/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albelmon <albelmon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 11:18:31 by albelmon          #+#    #+#             */
/*   Updated: 2025/10/17 15:33:52 by albelmon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Returns the last node of a linked list.
 * 
 * This function traverses a linked list until it reaches the last node
 * (the one whose 'next' pointer is NULL) and returns it.
 * 
 * @param lst The head of the linked list to traverse
 * @return t_list* Pointer to the last node of the list, 
 *         or NULL if the list is empty
 */
t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next != NULL)
		lst = lst->next;
	return (lst);
}

/* int	main(void)
{
	t_list	*lst;
	t_list	*node1;
	t_list	*node2;
	t_list	*node3;

	lst = ft_lstnew("hola0");
	node1 = ft_lstnew("hola1");
	node2 = ft_lstnew("hola2");
	node3 = ft_lstnew("hola3");
	ft_lstadd_front(&lst, node1);
	ft_lstadd_front(&lst, node2);
	ft_lstadd_front(&lst, node3);
	printf("Content: %s\n", (char *)ft_lstlast(lst)->content);
	printf("Content: %s\n", (char *)lst->content);
	return (0);
} */
