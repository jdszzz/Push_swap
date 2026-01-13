/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albelmon <albelmon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/11 19:39:55 by albelmon          #+#    #+#             */
/*   Updated: 2026/01/13 14:12:01 by albelmon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Objetivo: Orden ascendente, es decir: El número más pequeño top y el más grande bot
#include "push_swap.h"

int	push_swap(int argc, char **argv)
{
	t_stack *stack_a;

	stack_a = NULL;
	ft_check_input(argc, **argv, stack_a);
	return (0);
}

int	ft_check_input(int argc, char **argv, t_stack *stack_a)
{
	int	i;
	int	j;
	int	**temp_numbers;

	i = 1;
	temp_numbers = NULL;
	if (argc < 2)
		return (write(2, "error\n", 6), 1);
	while (i < argc)
	{
		temp_numbers = ft_split(argv[i++], ' ');
		j = 0;
		while (temp_numbers[j])
		{
			if (ft_isdigit(temp_numbers[j]))
			{
				ft_atoi(temp_numbers[j]);
				ft_check_duplicates(stack_a, temp_numbers[j]);
				ft_add_to_stack(temp_numbers[j], i, stack_a);
			}
			else
				return (write(2, "error\n", 6), 1);
			j++;
		}
	}
}

void	ft_add_to_stack(int argv, int i, t_stack *stack_a)
{
	stack_a = malloc(sizeof(t_stack));
	if (!stack_a)
		return (NULL);
	stack_a->value = argv;
	stack_a->index = i;
}

int	ft_check_duplicates(t_stack *stack_a, int n)
{
	while (stack_a)
	{
		if (stack_a->value == n)
			return (1);
		stack_a = stack_a->next;
	}
	return (0);
}
