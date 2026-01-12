/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albelmon <albelmon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/03 18:01:51 by albelmon          #+#    #+#             */
/*   Updated: 2025/10/17 15:50:03 by albelmon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//Busca la primera coincidencia de c en el bloque de memoria s.
/**
 * ft_memchr - Locates the first occurrence of a byte in a memory area.
 *
 * @s: Pointer to the memory area to be searched.
 * @c: Byte value to search for (passed as an int, 
 * but interpreted as unsigned char).
 * @n: Number of bytes to examine in the memory area.
 *
 * This function searches the first @n bytes of the
 *  memory area pointed to by @s
 * for the first occurrence of the byte value @c. If the byte is found,
 *  a pointer
 * to the matching byte in the memory area is returned. If the byte
 *  is not found
 * within the specified range, NULL is returned.
 *
 * Return: Pointer to the first occurrence of @c in @s,
 *  or NULL if not found.
 */
void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*ptrs;

	i = 0;
	ptrs = (unsigned char *)s;
	while (i < n)
	{
		if (ptrs[i] == (unsigned char)c)
			return (&ptrs[i]);
		i++;
	}
	return (NULL);
}

/*int	main(void)
{
	char str[] = "abcdef";

    // Caso 1: caracter presente en mitad de la cadena
    void *p1 = memchr(str, 'd', 6);
    void *p2 = ft_memchr(str, 'd', 6);
    printf("memchr:    %s\n", (char *)p1);
    printf("ft_memchr: %s\n\n", (char *)p2);

    // Caso 2: caracter presente al inicio
    p1 = memchr(str, 'a', 6);
    p2 = ft_memchr(str, 'a', 6);
    printf("memchr:    %s\n", (char *)p1);
    printf("ft_memchr: %s\n\n", (char *)p2);

    // Caso 3: caracter no presente
    p1 = memchr(str, 'z', 6);
    p2 = ft_memchr(str, 'z', 6);
    printf("memchr:    %s\n", p1 ? (char *)p1 : "NULL");
    printf("ft_memchr: %s\n\n", p2 ? (char *)p2 : "NULL");

    // Caso 4: caracter '\0' dentro de la cadena
    char str2[] = "abc\0def"; // contiene un '\0' en medio
    p1 = memchr(str2, '\0', 7);
    p2 = ft_memchr(str2, '\0', 7);
    printf("memchr:    encontrado en offset %ld\n", p1 ? (char *)p1 - str2 : -1);
    printf("ft_memchr: encontrado en offset %ld\n", p2 ? (char *)p2 - str2 : -1);

    return 0;
}*/
