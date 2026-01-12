/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_ptr_addr.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albelmon <albelmon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/25 19:23:29 by albelmon          #+#    #+#             */
/*   Updated: 2025/10/27 13:43:52 by albelmon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_get_ptr_addr(void *ptr)
{
	char	*hex;
	char	*addr;
	size_t	len;

	hex = ft_dec_to_hex((uintptr_t)ptr);
	len = ft_strlen(hex);
	addr = malloc(sizeof(char) * (len + 3));
	if (!addr)
	{
		free(hex);
		return (NULL);
	}
	addr[0] = '0';
	addr[1] = 'x';
	ft_strlcpy(addr + 2, hex, len + 1);
	free(hex);
	return (addr);
}

/* int	main(void)
{
	char *ptr = "hola";

	printf("%s\n", ft_get_ptr_addr(ptr));
	return (0);
} */
