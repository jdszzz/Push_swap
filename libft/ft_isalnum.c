/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albelmon <albelmon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/01 12:46:40 by albelmon          #+#    #+#             */
/*   Updated: 2025/10/17 15:30:01 by albelmon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Checks if a character is alphanumeric
 *
 * This function determines whether the input character is alphanumeric
 * (a letter or a digit). It checks if the character falls within the ASCII
 * ranges for lowercase letters (a-z), uppercase letters (A-Z), or 
 * digits (0-9).
 *
 * @param c The character to be checked
 * @return 1 if the character is alphanumeric, 0 otherwise
 */
int	ft_isalnum(int c)
{
	if ((c < 'a' || c > 'z') && (c < 'A' || c > 'Z') && (c < '0' || c > '9'))
		return (0);
	return (1);
}

/*#include <stdio.h>
int	main(void)
{
	printf("%d\n", ft_isalnum(','));
	return (0);
}*/
