/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_string_digit.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albelmon <albelmon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/16 12:24:38 by albelmon          #+#    #+#             */
/*   Updated: 2026/01/16 12:51:44 by albelmon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_is_string_digit(char	*str)
{
	int	i;

	i = 0;
	if (str[i] == '-' || str[i] == '+')
		i++;
	if (str[i] == '\0')
		return (0);
	while(str[i])
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
			return (0);
		i++;	
	}
	return (1);
}

/* int	main(void)
{
	char	*str;

	str = "1";
	printf("%i\n", ft_is_string_digit(str));
	return (0);
} */
