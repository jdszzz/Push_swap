/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ksort_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albelmon <albelmon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 19:01:51 by albelmon          #+#    #+#             */
/*   Updated: 2026/01/21 13:56:22 by albelmon         ###   ########.fr       */
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

void	ft_ksort(t_stack *a)
{
	t_stack	*node;
	
	node = a;
	if (node->index <= range)
		
}