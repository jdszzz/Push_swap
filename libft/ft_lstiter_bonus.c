/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albelmon <albelmon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 09:42:10 by albelmon          #+#    #+#             */
/*   Updated: 2026/01/13 12:22:23 by albelmon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
