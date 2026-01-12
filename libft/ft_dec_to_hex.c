/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dec_to_hex.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albelmon <albelmon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 12:51:38 by albelmon          #+#    #+#             */
/*   Updated: 2025/10/27 13:06:18 by albelmon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_dec_to_hex(unsigned long n)
{
	char	*hex;
	int		rest;
	int		nlen;

	nlen = ft_hexlen(n);
	hex = malloc(sizeof(char) * (nlen + 1));
	if (!hex)
		return (NULL);
	hex[nlen] = '\0';
	if (n == 0)
	{
		hex[0] = '0';
		hex[1] = '\0';
	}
	while (n != 0)
	{
		rest = n % 16;
		hex[--nlen] = "0123456789ABCDEF"[rest];
		n /= 16;
	}
	return (hex);
}
/* 
int	main(void)
{
	printf("%s\n", ft_dec_to_hex(254));
	return (0);
} */
