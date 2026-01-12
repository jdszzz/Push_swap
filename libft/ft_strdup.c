/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albelmon <albelmon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 17:14:21 by albelmon          #+#    #+#             */
/*   Updated: 2025/10/17 15:53:38 by albelmon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//Crea una copia de s, reserva espacio en memoria para copiar todos sus
//caracteres, copia s en la nueva memoria y devuelve un puntero al duplicado.
/**
 * @brief Duplicates a string.
 *
 * Allocates sufficient memory for a copy of the string 's', copies the string,
 * and returns a pointer to the newly allocated string. The new string is
 * null-terminated.
 *
 * @param s The string to duplicate.
 * @return A pointer to the duplicated string, or NULL if memory allocation 
 * fails.
 */
char	*ft_strdup(const char *s)
{
	char			*cpy;
	size_t			i;
	size_t			len_s;

	i = -1;
	len_s = ft_strlen(s);
	cpy = malloc(len_s + 1);
	if (!cpy)
		return (NULL);
	while (++i < len_s)
		cpy[i] = s[i];
	cpy[i] = '\0';
	return (cpy);
}

/*int	main(void)
{
	printf("%s\n", ft_strdup("hola"));
	return (0);
}*/
