/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albelmon <albelmon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/11 19:39:55 by albelmon          #+#    #+#             */
/*   Updated: 2026/01/26 16:36:42 by albelmon         ###   ########.fr       */
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
	if (argc < 2)
		return (0);
	ft_check_input(argc, argv, &a);
	return (0);
}
