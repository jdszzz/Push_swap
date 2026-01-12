/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albelmon <albelmon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 15:24:12 by albelmon          #+#    #+#             */
/*   Updated: 2025/10/27 09:11:18 by albelmon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_hexlen(unsigned long n)
{
	int	i;

	i = 1;
	if (n < 16)
		return (i);
	while (n >= 16)
	{
		n /= 16;
		i++;
	}
	return (i);
}

/* int	main(void)
{
	printf("%d\n", ft_hexlen(0));
	return (0);
} */