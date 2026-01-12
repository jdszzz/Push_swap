/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albelmon <albelmon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 09:42:10 by albelmon          #+#    #+#             */
/*   Updated: 2025/10/17 15:48:09 by albelmon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * ft_lstiter - Apply a function to each element's content in a linked list.
 *
 * @lst: Pointer to the first node of a singly linked list. 
 * If NULL, nothing is done.
 * @f: Function pointer to call for each node's content. If NULL, 
 * nothing is done.
 *
 * Description:
 * Traverses the list beginning at 'lst' and calls the function '
 * f' once for each
 * node, passing the node's 'content' as the single argument.
 *  Iteration proceeds
 * from head to tail following the 'next' pointers.
 *  The list nodes themselves are
 * not modified or freed by this function.
 *
 * Notes:
 * - If either 'lst' or 'f' is NULL, the function returns immediately.
 * - It is the caller's responsibility to ensure that 'f'
 *  handles the content
 *   correctly (type, lifetime) and that any side effects are intended.
 * - Modifying the list structure (adding/removing nodes or 
 * changing 'next')
 *   inside 'f' may lead to undefined behavior during traversal.
 */
void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !f)
		return ;
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}

/* static void	ft_newtoupper(void *content)
{
	int		i;
	char	*str;

	i = 0;
	str = (char *)content;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 32;
		i++;
	}
}

int	main(void)
{
	t_list	*lst;
	t_list	*node1;
	t_list	*node2;

	lst = ft_lstnew(ft_strdup("primero"));
	node1 = ft_lstnew(ft_strdup("segundo"));
	node2 = ft_lstnew(ft_strdup("tercero"));
	
	ft_lstadd_back(&lst, node1);
	ft_lstadd_back(&lst, node2);

	printf("Nodos antes de ft_lstiter:\n");
	t_list	*cpylst = lst;
	while (cpylst)
	{
		printf(" - %s\n", (char *)cpylst->content);
		cpylst = cpylst->next;
	}
	ft_lstiter(lst, ft_newtoupper);
	cpylst = lst;
	printf("\nNodos despues de ft_lstiter:\n");
	while (cpylst)
	{
		printf(" - %s\n", (char *)cpylst->content);
		cpylst = cpylst->next;
	}
	return (0);
} */
