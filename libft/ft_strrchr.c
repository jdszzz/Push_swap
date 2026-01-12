/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albelmon <albelmon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 14:54:48 by albelmon          #+#    #+#             */
/*   Updated: 2025/10/17 15:44:16 by albelmon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//Devuelve un puntero al caracter indicado empezando desde el final
/**
 * ft_strrchr - Locates the last occurrence of a character in a string.
 *
 * @s: The string to be searched.
 * @c: The character to locate, passed as an int but interpreted as a char.
 *
 * This function searches for the last occurrence of the character 'c'
 * in the string 's'. If 'c' is found, a pointer to its position in 's'
 * is returned. If 'c' is the null terminator ('\0'), a pointer to the
 * end of the string is returned. If 'c' is not found, NULL is returned.
 *
 * Return: A pointer to the last occurrence of 'c' in 's', or NULL if not found.
 */
char	*ft_strrchr(const char *s, int c)
{
	int	len_s;

	len_s = ft_strlen(s);
	if ((char)c == '0')
		return ((char *)(s + len_s));
	while (len_s >= 0)
	{
		if (s[len_s] == (char)c)
			return ((char *)(s + len_s));
		len_s--;
	}
	return (NULL);
}

/*int main(void)
{
    char *str = "hola hola";
    char *res_ft;
    char *res_std;

    // Caso 1: buscar 'o'
    res_ft = ft_strrchr(str, 'o');
    res_std = strrchr(str, 'o');
    printf("ft_strrchr: %s\n", res_ft);
    printf("strrchr   : %s\n", res_std);

    // Caso 2: buscar 'x' (no existe)
    res_ft = ft_strrchr(str, 'x');
    res_std = strrchr(str, 'x');
    printf("ft_strrchr: %s\n", res_ft ? res_ft : "NULL");
    printf("strrchr   : %s\n", res_std ? res_std : "NULL");

    // Caso 3: buscar '\0'
    res_ft = ft_strrchr(str, '\0');
    res_std = strrchr(str, '\0');
    printf("ft_strrchr: %s\n", res_ft);
    printf("strrchr   : %s\n", res_std);

    return 0;
}*/
