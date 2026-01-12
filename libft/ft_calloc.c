/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albelmon <albelmon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 15:28:17 by albelmon          #+#    #+#             */
/*   Updated: 2025/10/17 15:46:54 by albelmon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Allocates memory for an array and initializes it to zero
 * @param nmemb Number of elements to allocate
 * @param size Size in bytes of each element
 * @return Pointer to allocated memory, or NULL if allocation
 *  fails or overflow occurs
 * 
 * This function allocates memory for an array of nmemb elements
 *  of size bytes each
 * and returns a pointer to the allocated memory. The memory is set to zero.
 * If nmemb or size is 0, then ft_calloc() returns NULL.
 * If the multiplication of nmemb and size would result in integer overflow,
 * then ft_calloc() returns NULL.
 */
void	*ft_calloc(size_t nmemb, size_t size)
{
	unsigned char	*a;
	size_t			nbytes;
	size_t			i;

	if (size != 0 && nmemb > SIZE_MAX / size)
		return (NULL);
	i = -1;
	nbytes = nmemb * size;
	a = malloc(nbytes);
	if (!a)
		return (NULL);
	while (++i < nbytes)
		a[i] = 0;
	return (a);
}
