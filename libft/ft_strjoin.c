/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albelmon <albelmon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 18:28:30 by albelmon          #+#    #+#             */
/*   Updated: 2025/10/19 13:27:57 by albelmon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Concatenates two strings into a newly allocated string.
 *
 * This function takes two constant character strings, s1 and s2,
 * and returns a new string that is the result of appending s2 to s1.
 * The returned string is dynamically allocated and must be freed by the caller.
 *
 * @param s1 The first input string.
 * @param s2 The second input string to append to s1.
 * @return A pointer to the newly allocated concatenated string,
 *         or NULL if memory allocation fails.
 */
char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	len_s1;
	size_t	len_s2;
	char	*s3;

	if (!s1 || !s2)
		return (NULL);
	len_s1 = ft_strlen(s1);
	len_s2 = ft_strlen(s2);
	s3 = malloc(len_s1 + len_s2 + 1);
	if (!s3)
		return (NULL);
	i = -1;
	while (++i < len_s1)
		s3[i] = s1[i];
	i = -1;
	while (++i < len_s2)
		s3[len_s1 + i] = s2[i];
	s3[len_s1 + len_s2] = '\0';
	return (s3);
}

/*int main(void)
{
    char *res;

    // Caso normal
    res = ft_strjoin("hola", "adios");
    printf("Normal: '%s'\n", res);
    free(res);

    // Cadena vacía al principio
    res = ft_strjoin("", "adios");
    printf("Vacío inicio: '%s'\n", res);
    free(res);

    // Cadena vacía al final
    res = ft_strjoin("hola", "");
    printf("Vacío fin: '%s'\n", res);
    free(res);

    // Ambas cadenas vacías
    res = ft_strjoin("", "");
    printf("Ambas vacías: '%s'\n", res);
    free(res);

    // Cadenas largas
    res = ft_strjoin("Esta es una cadena muy larga ", "y esta menos");
    printf("Cadenas largas: '%s'\n", res);
    free(res);

    // Combinación de caracteres especiales
    res = ft_strjoin("¡Hola! ", "😈🔥🐐");
    printf("Especiales: '%s'\n", res);
    free(res);

    return 0;
}*/
