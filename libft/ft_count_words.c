/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_words.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albelmon <albelmon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 16:53:50 by albelmon          #+#    #+#             */
/*   Updated: 2025/11/11 10:07:54 by albelmon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * Cuenta el número de palabras en la cadena 's', separadas por el
 * carácter 'c'. Una palabra se define como una secuencia de
 * caracteres no igual a 'c'. Retorna el número total de palabras
 * encontradas.
 *
 * Parámetros:
 *   s: Puntero a la cadena de caracteres a analizar.
 *   c: Carácter delimitador usado para separar palabras.
 *
 * Retorno:
 *   Número de palabras encontradas en la cadena 's'.
 */
int	ft_count_words(const char *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i])
		{
			count++;
			while (s[i] && s[i] != c)
				i++;
		}
	}
	return (count);
}
