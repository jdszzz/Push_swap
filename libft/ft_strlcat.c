/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albelmon <albelmon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/01 12:47:41 by albelmon          #+#    #+#             */
/*   Updated: 2025/10/17 15:54:15 by albelmon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//La función devuelve src + dest cuando size > dest. 
//Y src + size cuando size <= dest
/**
 * @brief Concatenates two strings with size limitation, similar to strlcat.
 *
 * Appends the null-terminated string 'src' to the end of 'dest'.
 *  It will append
 * at most (size - strlen(dest) - 1) bytes, null-terminating the 
 * result. The function
 * returns the initial length of 'dest' plus the length of 'src'.
 *  If 'size' is less
 * than or equal to the length of 'dest', the function returns 
 * 'size' plus the length
 * of 'src', and no concatenation occurs.
 *
 * @param dest Pointer to the destination buffer (must be null-terminated).
 * @param src Pointer to the source string to append.
 * @param size Total size of the destination buffer.
 * @return The sum of the initial length of 'dest' and the length of 'src'.
 */
size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	dest_length;
	size_t	src_length;

	i = 0;
	dest_length = ft_strlen(dest);
	src_length = ft_strlen(src);
	if (dest_length >= size)
		return (src_length + size);
	while (src[i] && (dest_length + i < size - 1))
	{
		dest[dest_length + i] = src[i];
		i++;
	}
	dest[dest_length + i] = '\0';
	return (src_length + dest_length);
}

/*int	main(void)
{
	char dest[] = "hola";
	char src[] = "mundos";
	
	printf("%ld\n", ft_strlcat(dest, src, 10));
	return (0);
}*/
