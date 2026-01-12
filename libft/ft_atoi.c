/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albelmon <albelmon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/01 12:46:32 by albelmon          #+#    #+#             */
/*   Updated: 2025/10/20 16:47:55 by albelmon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Converts a string to an integer
 *
 * This function converts a string representation of a 
 * number into its corresponding
 * integer value. It handles:
 * - Leading whitespace characters (space, tab, newline, etc.)
 * - Optional single '+' or '-' sign
 * - Numeric characters
 * 
 * @param nptr Pointer to the string to be converted
 * @return The converted integer value
 *         If the string is invalid or empty, returns 0
 *         Negative numbers are handled through the sign parameter
 *
 * @note The function stops reading when it encounters a 
 * non-numeric character
 */
int	ft_atoi(const char *nptr)
{
	int	i;
	int	sign;
	int	n;

	i = 0;
	sign = 1;
	n = 0;
	while (nptr[i] == ' ' || nptr[i] == '\t' || nptr[i] == '\n'
		|| nptr[i] == '\v' || nptr[i] == '\f' || nptr[i] == '\r')
		i++;
	if (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i] == '-')
			sign = sign * -1;
		i++;
	}
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		n = n * 10 + nptr[i] - '0';
		i++;
	}
	return (n * sign);
}

/* #include <stdio.h>
int	main(void)
{
	printf("%d\n", ft_atoi("-28935"));
	return (0);
} */
