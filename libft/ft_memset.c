/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albelmon <albelmon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/01 12:46:14 by albelmon          #+#    #+#             */
/*   Updated: 2025/10/17 15:50:23 by albelmon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * ft_memset - Fills the first n bytes of the memory area pointed to by s
 *  with the constant byte c.
 *
 * @s: Pointer to the memory area to be filled.
 * @c: Value to be set. The value is passed as an int, but the function fills
 *  the memory area with the unsigned char conversion of this value.
 * @n: Number of bytes to be set to the value.
 *
 * Return: The pointer to the memory area s.
 *
 * This function is typically used to initialize a block of 
 * memory to a specific value.
 */
void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*ptr;

	i = -1;
	ptr = (unsigned char *)s;
	while (++i < n)
		ptr[i] = (unsigned char)c;
	return (s);
}

/*int	main(void)
{
	char	str[4] = "hola";
	ft_memset(str, 'A', 4);
	printf("%s\n", str);
	return (0);
}*/

/*int main(void)
{
	int	i;

	i = -1;
	unsigned char buffer[8] = {1, 2, 3, 4, 5, 6, 7, 8};

	ft_memset(buffer, 'A', 8);

	while (++i < 8)
		printf("%02X ", buffer[i]);
	printf("\n");

	return (0);
}*/
