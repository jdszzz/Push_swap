/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albelmon <albelmon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/01 12:47:49 by albelmon          #+#    #+#             */
/*   Updated: 2025/10/17 15:42:25 by albelmon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//size no es cuántos caracteres de src quieres copiar, sino el tamaño total 
//del buffer dest que estás dispuesto a usar, incluyendo el \0 final.
/**
 * ft_strlcpy - Copies up to size - 1 characters from the string src to dest,
 *              null-terminating the result.
 *
 * @dest: Pointer to the destination buffer where the content is to be copied.
 * @src:  Pointer to the source string to be copied.
 * @size: Maximum number of bytes to copy, including the null terminator.
 *
 * This function copies up to size - 1 characters from src to dest, ensuring
 * that dest is null-terminated. If size is 0, dest is not modified.
 * The function returns the total length of src. If the return value is
 * greater than or equal to size, truncation occurred.
 *
 * Returns: The length of src.
 */
size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (src[j])
		j++;
	if (size == 0)
		return (j);
	while (src[i] && i < size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (j);
}

/*#include <stdio.h>
int	main(void)
{
	char dest[20];
	char src[] = "hola";
	
	printf("%ld\n", ft_strlcpy(dest, src, 1));
	return (0);
}*/
