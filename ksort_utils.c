/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ksort_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albelmon <albelmon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 19:01:51 by albelmon          #+#    #+#             */
/*   Updated: 2026/01/26 18:42:21 by albelmon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_assign_index(t_stack *a)
{
	t_stack	*current;
	t_stack	*compare;
	int		index;

	current = a;
	while (current)
	{
		index = 0;
		compare = a;
		while (compare)
		{
			if (current->value > compare->value)
				index++;
			compare = compare->next;
		}
		current->index = index;
		current = current->next;
	}
}

int	ft_calculate_range(t_stack **stack)
{
	int	size;
	int	range;

	if (!stack || !*stack)
		return (0);
	range = 0;
	size = ft_stack_size(*stack);
	if (size <= 10)
		range = 2;
	else if (size <= 100)
		range = size / 6 + 2;
	else
		range = size / 14 + 10;
	return (range);
}

int	ft_find_max_pos(t_stack *stack)
{
	int	max_index;
	int	pos;
	int	max_pos;
	
	pos = 0;
	max_pos = 0;
	max_index = -1;
	while (stack)
	{
		if (stack->index > max_index)
		{
			max_index = stack->index;
			max_pos = pos;
		}
		stack = stack->next;
		pos++;
	}
	return (max_pos);
}
