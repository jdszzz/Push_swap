/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albelmon <albelmon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 10:08:19 by albelmon          #+#    #+#             */
/*   Updated: 2025/10/17 15:32:02 by albelmon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Adds a new node at the beginning of a linked list
 * 
 * This function adds the node 'new' at the beginning of the linked list pointed
 * to by 'lst'. It updates the head pointer to point to the new node and sets
 * the next pointer of the new node to point to the previous first node.
 *
 * @param lst Double pointer to the head of the linked list
 * @param new Pointer to the node to be added at the front
 * 
 * @return None
 */
void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst && !new)
		return ;
	new->next = *lst;
	*lst = new;
}

/* int	main(void)
{
	t_list	*node1;
	t_list	*node2;
	t_list	*node3;
	t_list	*list;

	node3 = ft_lstadd_ftont("cabra");
	node2 = ft_lstadd_ftont("la");
	node1 = ft_lstadd_ftont("Soy");
	list = node1;
	ft_lstadd_front(&list, node2);
	ft_lstadd_front(&list, node3);
} */
