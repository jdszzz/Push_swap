/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albelmon <albelmon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/16 11:42:18 by albelmon          #+#    #+#             */
/*   Updated: 2026/01/19 17:47:22 by albelmon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_check_input(int argc, char **argv, t_stack **a)
{
	int		i;
	int		j;
	char	**str_num;

	i = 1;
	while (i < argc)
	{
		str_num = ft_split(argv[i++], ' ');
		if (!str_num)
			ft_error(a, NULL);
		j = 0;
		while (str_num[j])
		{
			if (ft_process_number(str_num[j], a) == 0)
				ft_error(a, str_num);
			j++;
		}
		ft_free_split(str_num);
	}
	return (1);
}

int	ft_process_number(char *str_num, t_stack **a)
{
	long	num;
	
	if (!ft_is_string_digit(str_num))
		return (0);
	num = ft_atoi_ps(str_num);
	if (num > 2147483647 || num < -2147483648)
		return (0);
	if (ft_check_duplicates(*a, (int)num) == 0)
		return (0);
	ft_add_to_stack(a, (int)num);
	return (1);
}

int	ft_check_duplicates(t_stack *a, int n)
{
	while (a)
	{
		if (a->value == n)
			return (0);
		a = a->next;
	}
	return (1);
}
