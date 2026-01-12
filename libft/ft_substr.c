/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albelmon <albelmon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 17:41:01 by albelmon          #+#    #+#             */
/*   Updated: 2025/10/17 15:46:18 by albelmon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//Crea una substring de s que empieza en el indice "start", y ocupa como
//máximo len bytes.
/**
 * Allocates and returns a substring from the string `s`.
 *
 * The substring begins at index `start` and has a maximum length of `len`.
 * If `start` is greater than the length of `s`, an empty string is returned.
 * If `len` exceeds the length of the string starting from `start`,
 *  the substring
 * will contain only the available characters.
 *
 * @param s     The source string from which to extract the substring.
 * @param start The starting index of the substring in `s`.
 * @param len   The maximum length of the substring.
 *
 * @return      A pointer to the newly allocated substring, or NULL 
 * if allocation fails
 *              or if `s` is NULL. The returned string is null-terminated.
 */
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	i;
	size_t	len_s;

	if (!s)
		return (NULL);
	i = -1;
	len_s = ft_strlen(s);
	if (start >= len_s)
		return (ft_strdup(""));
	if (len > len_s - start)
		len = len_s - start;
	substr = malloc(len + 1);
	if (!substr)
		return (NULL);
	while (s[start] && ++i < len)
		substr[i] = s[start + i];
	substr[i] = '\0';
	return (substr);
}

/* int	main(void)
{
	printf("%s\n", ft_substr("hola", 1, 2));
	return (0);
} */
