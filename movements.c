/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   movements.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albelmon <albelmon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/13 16:00:47 by albelmon          #+#    #+#             */
/*   Updated: 2026/01/13 17:37:48 by albelmon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

//Intercambia los dos primeros elementos en la cima de la pila. No hace nada si hay uno o ningún elemento.
void	ft_swap(t_stack **stack)
{
	t_stack	*;
	t_stack	*;

	tmp = malloc(sizeof(t_stack));
	swap = malloc(sizeof(t_stack));
	if (!*stack || !((*stack)->next))
		return ;
	swap = tmp;
	tmp = stack;
	stack = swap;
}

void	ft_push(t_stack **stack_a, t_stack **stack_b)
{
	
}

void	ft_rotate(t_stack **stack)
{
	
}

void	ft_reverse_rotate(t_stack **stack)
{
	
}
