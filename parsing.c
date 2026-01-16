/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albelmon <albelmon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/16 11:42:18 by albelmon          #+#    #+#             */
/*   Updated: 2026/01/16 16:15:11 by albelmon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_check_input(int argc, char **argv, t_stack *a)
{
	int		i;
	int		j;
	char	**temp_numbers;

	i = 1;
	temp_numbers = NULL;
	if (argc < 2)
		return (write(2, "Error\n", 6), 1);
	while (i < argc)
	{
		temp_numbers = ft_split(argv[i++], ' ');
		j = 0;
		while (temp_numbers[j])
		{
			if (ft_is_string_digit(temp_numbers[j]))
			{
				ft_atoi(temp_numbers[j]);
				ft_check_duplicates(a, temp_numbers[j]);
				ft_add_to_stack(temp_numbers[j], i, a);
			}
			else
				return (write(2, "Error\n", 6), 1);
			j++;
		}
	}
}

int	ft_check_duplicates(t_stack *a, int n)
{
	while (a)
	{
		if (a->value == n)
			return (write(2, "Error\n", 6), 1);
		a = a->next;
	}
	return (0);
}
