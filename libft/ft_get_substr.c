/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_substr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albelmon <albelmon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 16:59:31 by albelmon          #+#    #+#             */
/*   Updated: 2025/10/20 17:00:59 by albelmon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*	Devuelve la substring hasta 'c' o '\0'
	Reserva espacio para la nueva substring	*/
char	*ft_get_substr(const char *s, char c)
{
	int		i;
	char	*new_s;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	new_s = malloc(i + 1);
	if (!new_s)
		return (NULL);
	i = 0;
	while (s[i] && s[i] != c)
	{
		new_s[i] = s[i];
		i++;
	}
	new_s[i] = '\0';
	return (new_s);
}
