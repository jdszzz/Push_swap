/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albelmon <albelmon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/01 12:48:06 by albelmon          #+#    #+#             */
/*   Updated: 2025/10/17 15:54:48 by albelmon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * ft_strnstr - Locates the first occurrence of the 
 * null-terminated string 'needle'
 *              within the string 'haystack', where not
 *  more than 'len' characters
 *              are searched. Characters after '\0' are not searched.
 *
 * @haystack: The string to be searched.
 * @needle: The substring to search for.
 * @len: The maximum number of characters to search.
 *
 * Return: A pointer to the first occurrence of 'needle' in 'haystack' within
 *         'len' characters, or NULL if 'needle' is not found. If 'needle' is
 *         an empty string, 'haystack' is returned.
 *
 * Note: This function does not search past the first '\0' in 'haystack' or
 *       beyond 'len' characters.
 */
char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (needle[i] == '\0')
		return ((char *)(haystack));
	while (haystack[i] && i < len)
	{
		j = 0;
		while (haystack[i + j] == needle[j] && i + j < len)
		{
			if (needle[j + 1] == '\0')
				return ((char *)(haystack + i));
			j++;
		}
		i++;
	}
	return (NULL);
}

/*int	main(void)
{
	printf("%s\n", ft_strnstr("hola mundo mundil", "a m", 8));
	return (0);
}*/
