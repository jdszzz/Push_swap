/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albelmon <albelmon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/01 12:47:29 by albelmon          #+#    #+#             */
/*   Updated: 2025/10/17 15:55:19 by albelmon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * ft_strchr - Locates the first occurrence of a character in a string.
 *
 * @str: The string to be searched.
 * @c: The character to search for (passed as an int, but 
 * interpreted as a char).
 *
 * Return: A pointer to the first occurrence of the character c in
 *  the string str,
 *         or NULL if the character is not found. If c is '\0', 
 * returns a pointer
 *         to the null terminator at the end of str.
 */
char	*ft_strchr(const char *str, int c)
{
	unsigned int	i;

	i = 0;
	while (str[i])
	{
		if ((char)c == str[i])
			return ((char *)(str + i));
		i++;
	}
	if ((char)c == '\0')
		return ((char *)(str + i));
	return (NULL);
}

/*int	main(void)
{
	printf("%s\n", ft_strchr("hola", 'o'));
	return (0);
}*/
