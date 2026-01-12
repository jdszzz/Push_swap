/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albelmon <albelmon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/03 16:46:08 by albelmon          #+#    #+#             */
/*   Updated: 2025/10/17 15:46:42 by albelmon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Sets n bytes of memory to zero starting from pointer s
 *
 * This function writes n zeroes (zeros) to the string s. If n is zero, 
 * ft_bzero() does nothing.
 *
 * @param s Pointer to the memory area to be filled with zeros
 * @param n Number of bytes to be set to zero
 * @return None
 *
 * @note This is an implementation of the standard 
 * C library function bzero()
 */
void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*ptrs;

	i = -1;
	ptrs = (unsigned char *)s;
	while (++i < n)
		ptrs[i] = 0;
}

/*int	main(void)
{
	char buf1[10] = "hola";
	ft_bzero(buf1, 10);
	return (0);
}*/
