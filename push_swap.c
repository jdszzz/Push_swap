/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albelmon <albelmon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/11 19:39:55 by albelmon          #+#    #+#             */
/*   Updated: 2026/01/16 00:34:19 by albelmon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Objetivo: Orden ascendente, es decir: El número más pequeño top y el más grande bot
#include "push_swap.h"

int	push_swap(int argc, char **argv)
{
	t_stack *a;
	t_stack *b;

	b = NULL;
	a = NULL;
	ft_check_input(argc, **argv, a);
	return (0);
}

int	ft_check_input(int argc, char **argv, t_stack *a)
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
				ft_check_duplicates(a, temp_numbers[j]);
				ft_add_to_stack(temp_numbers[j], i, a);
			}
			else
				return (write(2, "error\n", 6), 1);
			j++;
		}
	}
}

void	ft_add_to_stack(int value, int index, t_stack **a)
{
	t_stack *new_node;
	t_stack	*last_node;

	new_node = malloc(sizeof(t_stack));
	if (!new_node)
		return (free(new_node), NULL);
	new_node->value = value;
	new_node->index = index;
	new_node->next = NULL;
	if (*a == NULL)
	{
		*a = new_node;
		new_node->prev = NULL;
	}
	else
	{
		last_node = *a;
		while (last_node->next != NULL)
			last_node = last_node->next;
		last_node->next = new_node;
		new_node->prev = last_node;
	}
}

int	ft_check_duplicates(t_stack *a, int n)
{
	while (a)
	{
		if (a->value == n)
			return (write(2, "error\n", 6), 1);
		a = a->next;
	}
	return (0);
}
