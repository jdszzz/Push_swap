/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albelmon <albelmon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/11 19:39:55 by albelmon          #+#    #+#             */
/*   Updated: 2026/01/13 01:38:48 by albelmon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Objetivo: Orden ascendente, es decir: El número más pequeño top y el más grande bot
#include "push_swap.h"

int	push_swap(int argc, char **argv)
{
	ft_check_input(argc, **argv);
	return (0);
}

int	ft_check_input(int argc, char **argv)
{
	int	i;
	int	j;
	int	n;
	
	j = 0;
	i = 0;
	n = 0;
	if (argc < 2)
		return (write(2, "error\n", 6));
	while (*argv)
	{
		while (j || argv[i][j] == ' ' || argv[i][j] == ft_isdigit(argv[i][j]))
		{
			if (argv[i][j] == ft_isdigit(argv[i][j]))
				ft_add_to_stack(argv[i][j], n++);
			j++;
		}
		i++;
		if (!argv[i][j] == ' ' || !argv[i][j] == ft_isdigit(*argv))
			return (write(2, "error\n", 6));
	}


	while (*argv)
	{
		while (argv)
		if (!argv[i][j] == ' ' || !argv[i][j] == ft_isdigit(*argv))
			return (write(2, "error\n", 6));
	}
}

void	ft_add_to_stack(int argv, int i)
{
	t_stack *stack_a;

	stack_a = malloc(sizeof(t_stack));
	if (!stack_a)
		return (NULL);
	stack_a->value = argv;
	stack_a->index = i;
}
