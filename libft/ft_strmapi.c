/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albelmon <albelmon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 18:46:24 by albelmon          #+#    #+#             */
/*   Updated: 2025/10/17 15:51:02 by albelmon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * ft_strmapi - Applies a function to each character of a string,
 *  creating a new string.
 *
 * @s: The input string to be mapped.
 * @f: The function to apply to each character. It takes the index of 
 * the character and the character itself as arguments.
 *
 * Allocates (with malloc) and returns a new string, which is the result of
 *  applying the function 'f'
 * to each character of the string 's'. The function 'f' is passed the
 *  index of each character and the character itself.
 * The new string is null-terminated.
 *
 * Return: The newly allocated string resulting from the successive
 *  applications of 'f'.
 *         Returns NULL if memory allocation fails or if 's' or 'f' is NULL.
 */
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*result;

	if (!s || !f)
		return (NULL);
	result = malloc(ft_strlen(s) + 1);
	if (!result)
		return (NULL);
	i = -1;
	while (s[++i])
		result[i] = f(i, s[i]);
	result[i] = '\0';
	return (result);
}

/* static char	ft_newtoupper(unsigned int i, char c)
{
	(void)i;
	if (c >= 'a' && c <= 'z')
		c = c - 32;
	return (c);
} */

/* int	main(void)
{
	const char	*str = "hola";
	printf("%s\n", ft_strmapi(str, ft_newtoupper));
	return (0);
} */
