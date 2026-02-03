/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   movements2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albelmon <albelmon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/16 00:42:38 by albelmon          #+#    #+#             */
/*   Updated: 2026/02/03 13:25:04 by albelmon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

//ss: Ejecuta sa y sb al mismo tiempo.
void	ft_swap_both(t_stack **a, t_stack **b)
{
	ft_swap(a, 'a', 0);
	ft_swap(b, 'b', 0);
	write(1, "ss\n", 3);
}

//rr: Ejecuta ra y rb al mismo tiempo.
void	ft_rotate_both(t_stack **a, t_stack **b)
{
	ft_rotate(a, 'a', 0);
	ft_rotate(b, 'b', 0);
	write(1, "rr\n", 3);
}

//rrr: Ejecuta rra y rrb al mismo tiempo.
void	ft_reverse_rotate_both(t_stack **a, t_stack **b)
{
	ft_reverse_rotate(a, 'a', 0);
	ft_reverse_rotate(b, 'b', 0);
	write(1, "rrr\n", 4);
}

void	ft_push_smallest_to_b(t_stack **a, t_stack **b)
{
	int	pos;
	int	size;

	pos = ft_find_min_pos(*a);
	size = ft_stack_size(*a);
	while (pos != 0)
	{
		if (pos <= size / 2)
			ft_rotate(a, 'a', 1);
		else
			ft_reverse_rotate(a, 'a', 1);
		pos = ft_find_min_pos(*a);
	}
	ft_push_b(b, a, 1);
}
