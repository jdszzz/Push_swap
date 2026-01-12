/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albelmon <albelmon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/01 13:20:45 by albelmon          #+#    #+#             */
/*   Updated: 2025/10/17 15:50:10 by albelmon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Copies n bytes from memory area src to memory area dest.
 *
 * This function copies n bytes from the memory area pointed to by src
 * to the memory area pointed to by dest. The memory areas must not overlap.
 * If both dest and src are NULL and n is not zero, the function returns NULL.
 *
 * @param dest Pointer to the destination memory area.
 * @param src Pointer to the source memory area.
 * @param n Number of bytes to copy.
 * @return Pointer to the destination memory area (dest), or NULL if both 
 * dest and src are NULL and n is not zero.
 */
void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*ptrdest;
	unsigned char	*ptrsrc;

	if (!dest && !src && n != 0)
		return (NULL);
	ptrdest = (unsigned char *)dest;
	ptrsrc = (unsigned char *)src;
	i = -1;
	while (++i < n)
		ptrdest[i] = ptrsrc[i];
	return (dest);
}

/*#include <stdio.h>
int	main(void)
{
	char	dest[10] = "hola";
	char	src[] = "adios";
	ft_memcpy(dest, src, 6);
	printf("%s\n", dest);
	return (0);
}*/
