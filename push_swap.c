/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albelmon <albelmon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/11 19:39:55 by albelmon          #+#    #+#             */
/*   Updated: 2026/02/03 20:00:38 by albelmon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sort_stack(t_stack **a, t_stack **b)
{
	int	size;

	size = ft_stack_size(*a);
	if (size == 2)
		ft_swap(a, 'a', 1);
	else if (size == 3)
		ft_sort_3(a);
	else if (size <= 5)
		ft_sort_5(a, b, size);
	else
	{
		ft_phase_a(a, b);
		ft_phase_b(a, b);
	}
}

int	main(int argc, char **argv)
{
	t_stack	*a;
	t_stack	*b;

	b = NULL;
	a = NULL;
	if (argc < 2)
		return (0);
	ft_check_input(argc, argv, &a);
	ft_assign_index(a);
	if (!ft_is_sorted(a))
		ft_sort_stack(&a, &b);
	ft_free_stack(&a);
	ft_free_stack(&b);
	return (0);
}
