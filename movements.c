/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   movements.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albelmon <albelmon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/13 16:00:47 by albelmon          #+#    #+#             */
/*   Updated: 2026/02/03 17:45:46 by albelmon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_swap(t_stack **stack, char x, int bool)
{
	t_stack	*first;
	t_stack	*second;

	if (!stack || !*stack || !((*stack)->next))
		return ;
	first = *stack;
	second = first->next;
	first->next = second->next;
	if (second->next)
		second->next->prev = first;
	second->next = first;
	second->prev = NULL;
	first->prev = second;
	*stack = second;
	if (bool)
	{
		write(1, "s", 1);
		write(1, &x, 1);
		write(1, "\n", 1);
	}
}

void	ft_push_a(t_stack **a, t_stack **b, int bool)
{
	t_stack	*node;

	if (!a || !b || !*b)
		return ;
	node = *b;
	*b = (*b)->next;
	if (*b)
		(*b)->prev = NULL;
	node->next = *a;
	if (*a)
		(*a)->prev = node;
	*a = node;
	(*a)->prev = NULL;
	if (bool)
		write(1, "pa\n", 3);
}

void	ft_push_b(t_stack **b, t_stack **a, int bool)
{
	t_stack	*node;

	if (!b || !a || !*a)
		return ;
	node = *a;
	*a = (*a)->next;
	if (*a)
		(*a)->prev = NULL;
	node->next = *b;
	if (*b)
		(*b)->prev = node;
	*b = node;
	(*b)->prev = NULL;
	if (bool)
		write(1, "pb\n", 3);
}

void	ft_rotate(t_stack **stack, char x, int bool)
{
	t_stack	*first;
	t_stack	*last;

	if (!stack || !*stack || !((*stack)->next))
		return ;
	last = *stack;
	first = *stack;
	while (last->next)
		last = last->next;
	*stack = first->next;
	(*stack)->prev = NULL;
	last->next = first;
	first->prev = last;
	first->next = NULL;
	if (bool)
	{
		write(1, "r", 1);
		write(1, &x, 1);
		write(1, "\n", 1);
	}
}

void	ft_reverse_rotate(t_stack **stack, char x, int bool)
{
	t_stack	*last;

	if (!stack || !*stack || !((*stack)->next))
		return ;
	last = *stack;
	while (last->next)
		last = last->next;
	if (last->prev)
		last->prev->next = NULL;
	last->next = *stack;
	last->prev = NULL;
	(*stack)->prev = last;
	*stack = last;
	if (bool)
	{
		write(1, "rr", 2);
		write(1, &x, 1);
		write(1, "\n", 1);
	}
}
