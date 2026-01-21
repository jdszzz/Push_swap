/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albelmon <albelmon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 19:10:32 by albelmon          #+#    #+#             */
/*   Updated: 2026/01/21 14:01:22 by albelmon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_add_to_stack(t_stack **a, int value)
{
	t_stack *new_node;
	t_stack	*last_node;

	new_node = malloc(sizeof(t_stack));
	if (!new_node)
		ft_error(a, NULL);
	new_node->value = value;
	new_node->next = NULL;
	if (*a == NULL)
	{
		*a = new_node;
		new_node->prev = NULL;
	}
	else
	{
		last_node = *a;
		while (last_node->next != NULL)
			last_node = last_node->next;
		last_node->next = new_node;
		new_node->prev = last_node;
	}
}

int	ft_stack_size(t_stack *stack)
{
	int	i;

	if (!stack)
		return (0);
	i = 0;
	while (stack)
	{
		stack = stack->next;
		i++;
	}
	return (i);
}

/* t_stack	*ft_node_last(t_stack *node)
{
	if (!node)
		return (NULL);
	while (node->next != NULL)
		node = node->next;
	return (node);
} */
