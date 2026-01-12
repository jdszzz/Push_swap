/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albelmon <albelmon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/11 19:39:55 by albelmon          #+#    #+#             */
/*   Updated: 2026/01/12 20:44:51 by albelmon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Objetivo: Orden ascendente, es decir: El número más pequeño top y el más grande bot
#include "push_swap.h"

int	push_swap(int argc, char **argv)
{
	t_stack *stack_a;
	t_stack *stack_b;

	stack_a = NULL;
	stack_b = NULL;
	ft_check_input(argc, **argv);
	return (0);
}

int	ft_check_input(int argc, char **argv)
{
	int	i;
	
	i = 0;
	if (argc != 2)
		return (write(2, "error\n", 6));
	while (*argv)
	{
		if (*argv == ' ' || *argv == ft_isdigit(*argv))
		{
			if (*argv == ft_isdigit(*argv))
				ft_add_to_stack(*argv);
			i++;
		}
		else
			return (write(2, "error\n", 6));
	}
}

int	ft_add_to_stack(int argv)
{
	
}
