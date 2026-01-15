/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   movements.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albelmon <albelmon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/13 16:00:47 by albelmon          #+#    #+#             */
/*   Updated: 2026/01/15 20:39:38 by albelmon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

//sa-sb-ss: Intercambia los dos primeros elementos en la cima de la pila. No hace nada si hay uno o ningún elemento.
void	ft_swap(t_stack **stack)
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
}

//pa-pb: Toma el primer elemento en la cima de b y lo pone en la cima de a. No hace nada si b está vacía.
void	ft_push_a(t_stack **a, t_stack **b)
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
}

//ra-rb-rr: Desplaza hacia arriba todos los elementos de la pila a una posición. El primer elemento se convierte en el último.
void	ft_rotate(t_stack **stack)
{
	t_stack	*first;
	t_stack	*last;

	if (!stack || !*stack || (*stack)-> next)
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
}

//rra-rrb-rrr: Desplaza hacia abajo todos los elementos de la pila a una posición. El último elemento se convierte en el primero.
void	ft_reverse_rotate(t_stack **stack)
{
	t_stack	*last;

	if (!stack || !*stack || (*stack)-> next)
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
}
