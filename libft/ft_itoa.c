/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albelmon <albelmon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 13:50:25 by albelmon          #+#    #+#             */
/*   Updated: 2025/10/20 14:46:29 by albelmon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	int		len_n;
	char	*str;

	if (n == INT_MIN)
		return (ft_strdup("-2147483648"));
	len_n = ft_nbrlen(n);
	str = malloc(len_n + 1);
	if (!str)
		return (NULL);
	if (n == 0)
		str[0] = '0';
	if (n < 0)
	{
		str[0] = '-';
		n *= -1;
	}
	str[len_n] = '\0';
	while (n != 0)
	{
		len_n--;
		str[len_n] = n % 10 + '0';
		n = n / 10;
	}
	return (str);
}

/* int	main(void)
{
	int	n1;
	int	n2;
	int	n3;
	int	n4;

	n1 = -56454;
	printf("%d\n", ft_nbrlen(n1));
	printf("%s\n\n", ft_itoa(n1));

	n2 = 56454;
	printf("%d\n", ft_nbrlen(n2));
	printf("%s\n\n", ft_itoa(n2));

	n3 = -2147483648;
	printf("%d\n", ft_nbrlen(n3));
	printf("%s\n\n", ft_itoa(n3));

	n4 = 0;
	printf("%d\n", ft_nbrlen(n4));
	printf("%s\n", ft_itoa(n4));
	return (0);
} */
