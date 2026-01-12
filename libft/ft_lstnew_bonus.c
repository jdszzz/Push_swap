/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albelmon <albelmon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 09:34:25 by albelmon          #+#    #+#             */
/*   Updated: 2025/10/17 15:48:50 by albelmon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Creates a new node for a linked list
 * 
 * Allocates memory for a new node and initializes its members. The new node
 * will contain the given content pointer and its 
 * next pointer will be set to NULL.
 * 
 * @param content The data to be stored in the new node
 * @return t_list* Pointer to the newly created node,
 *  or NULL if allocation fails
 */
t_list	*ft_lstnew(void *content)
{
	t_list	*node;

	node = malloc(sizeof(t_list));
	if (!node)
		return (NULL);
	node->content = content;
	node->next = NULL;
	return (node);
}

/* int main(void)
{
	t_list *nodo;

	nodo = ft_lstnew("hola");
	printf("Content: %s\n", (char *)nodo->content);
	printf("Next: %p\n", (void *)nodo->next);
	free(nodo);
	return (0);
} */
