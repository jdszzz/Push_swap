/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albelmon <albelmon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 14:47:00 by albelmon          #+#    #+#             */
/*   Updated: 2025/10/17 15:48:29 by albelmon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Creates a new list by applying a function to each element
 *  of an existing list
 * 
 * This function iterates through the input list 'lst' and creates 
 * a new list where
 * each element is the result of applying function 'f' to the content
 *  of the original list.
 * If any memory allocation fails during the process, all allocated
 *  memory is properly freed
 * using the 'del' function.
 *
 * @param lst The address of a pointer to a node
 * @param f Function pointer to be applied to each element's content
 * @param del Function pointer used to delete the content
 *  of a node if needed
 * @return t_list* New list with transformed content,
 *  or NULL if allocation fails
 *                 or if any input parameter is NULL
 */
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newlst;
	t_list	*newnode;

	if (lst == NULL || !f || !del)
		return (NULL);
	newlst = NULL;
	while (lst)
	{
		newnode = ft_lstnew(NULL);
		if (!newnode)
		{
			ft_lstclear(&newlst, del);
			return (NULL);
		}
		newnode->content = f(lst->content);
		ft_lstadd_back(&newlst, newnode);
		lst = lst->next;
	}
	return (newlst);
}

/* static void	*ft_newtoupper(void *content)
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
	return (content);
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

	printf("Nodos antes de aplicar f:\n");
	t_list	*cpylst = lst;
	while (cpylst)
	{
		printf(" - %s\n", (char *)cpylst->content);
		cpylst = cpylst->next;
	}

	printf("Nodos despues de aplicar f:\n");
	t_list *newlst = ft_lstmap(lst, ft_newtoupper, &free);
	while (newlst)
	{
		printf(" - %s\n", (char *)newlst->content);
		newlst = newlst->next;
	}
	ft_lstclear(&lst, &free);
	ft_lstclear(&newlst, &free);

	return (0);
} */
