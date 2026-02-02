/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ksort.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albelmon <albelmon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/26 18:26:49 by albelmon          #+#    #+#             */
/*   Updated: 2026/02/02 17:40:23 by albelmon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_phase_A(t_stack **a, t_stack **b)
{
	int		i;
	int		range;
	
	i = 0;
	range = ft_calculate_range(a);
	while (*a)
	{
		if ((*a)->index <= i)
		{
			ft_push_b(b, a, 1);
			ft_rotate(b, 'b', 1);
			i++;
		}
		else if ((*a)->index <= (i + range))
		{
			ft_push_b(b, a, 1);
			i++;
		}
		else if ((*a)->index > (i + range))
			ft_rotate(a, 'a', 1);
	}
}

void	ft_phase_B(t_stack **a, t_stack **b)
{
	int	max_pos;
	int	stack_size;
	
	while (*b)
	{
		max_pos = ft_find_max_pos(*b);
		stack_size = ft_stack_size(*b);
		if (max_pos == 0)
			ft_push_a(a, b, 1);
		else if (max_pos <= stack_size / 2)
			ft_rotate(b, 'b', 1);
		else
			ft_reverse_rotate(b, 'b', 1);
	}
}
