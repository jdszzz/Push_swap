/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albelmon <albelmon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/01 12:47:34 by albelmon          #+#    #+#             */
/*   Updated: 2025/10/17 15:53:57 by albelmon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Applies a function to each character of a string, passing its
 *  index and address.
 *
 * This function iterates over the string `s` and applies the function `f`
 *  to each character.
 * The function `f` receives the current index and a pointer to the character
 *  at that index.
 * If either `s` or `f` is NULL, the function does nothing.
 *
 * @param s The string to be iterated over.
 * @param f The function to apply to each character, taking the index and a 
 * pointer to the character.
 */
void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	int	i;

	if (s && f)
	{
		i = -1;
		while (s[++i])
			f(i, &s[i]);
	}
}

/*#include <stdio.h>
int	main(void)
{
	char str[] = "hola";
	ft_striteri(str, ft_newtoupper);
	printf("%s\n", str);
	return (0);
}*/
