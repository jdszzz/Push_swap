/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   movements.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albelmon <albelmon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/13 16:00:47 by albelmon          #+#    #+#             */
/*   Updated: 2026/01/14 03:36:54 by albelmon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

//sa-sb-ss: Intercambia los dos primeros elementos en la cima de la pila. No hace nada si hay uno o ningún elemento.
void	ft_swap(t_stack **stack)
{
	t_stack	*first;
	t_stack	*second;

	first = malloc(sizeof(t_stack));
	second = malloc(sizeof(t_stack));
	if (!*stack || !((*stack)->next))
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

void	ft_push(t_stack **stack_a, t_stack **stack_b)
{
	
}

//ra-rb-rr: Desplaza hacia arriba todos los elementos de la pila a una posición. El primer elemento se convierte en el último.
void	ft_rotate(t_stack **stack)
{
	t_stack	*first;
	t_stack	*last;

	last = malloc(sizeof(t_stack));
	first = malloc(sizeof(t_stack));
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

void	ft_reverse_rotate(t_stack **stack)
{
	
}
