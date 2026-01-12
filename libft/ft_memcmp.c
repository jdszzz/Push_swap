/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albelmon <albelmon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 11:32:41 by albelmon          #+#    #+#             */
/*   Updated: 2025/10/17 15:37:36 by albelmon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Compares two memory areas byte by byte.
 *
 * This function compares the first 'n' bytes of the memory areas
 * pointed to by 's1' and 's2'. The comparison is performed using
 * unsigned characters. If the memory areas are equal, the function
 * returns 0. Otherwise, it returns the difference between the first
 * pair of bytes that differ.
 *
 * @param s1 Pointer to the first memory area.
 * @param s2 Pointer to the second memory area.
 * @param n Number of bytes to compare.
 * @return An integer less than, equal to, or greater than zero if the
 *         first 'n' bytes of 's1' are found to be less than, to match,
 *         or be greater than those of 's2', respectively.
 */
int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*ptrs1;
	unsigned char	*ptrs2;

	i = 0;
	ptrs1 = (unsigned char *)s1;
	ptrs2 = (unsigned char *)s2;
	if (n == 0)
		return (0);
	while (i < n)
	{
		if (ptrs1[i] != ptrs2[i])
			return (ptrs1[i] - ptrs2[i]);
		i++;
	}
	return (0);
}

/*int main(void)
{
    char *a, *b;

    // Caso 1: cadenas idénticas
    a = "abcdef"; b = "abcdef";
    printf("Caso 1 (idénticas): memcmp=%d | ft_memcmp=%d\n",
           memcmp(a, b, 6), ft_memcmp(a, b, 6));

    // Caso 2: diferencia en el último carácter
    a = "abcdeg"; b = "abcdef";
    printf("Caso 2 (último distinto): memcmp=%d | ft_memcmp=%d\n",
           memcmp(a, b, 6), ft_memcmp(a, b, 6));

    // Caso 3: diferencia en el primero
    a = "xbcdef"; b = "abcdef";
    printf("Caso 3 (primero distinto): memcmp=%d | ft_memcmp=%d\n",
           memcmp(a, b, 6), ft_memcmp(a, b, 6));

    // Caso 4: n = 0
    a = "abc"; b = "xyz";
    printf("Caso 4 (n=0): memcmp=%d | ft_memcmp=%d\n",
           memcmp(a, b, 0), ft_memcmp(a, b, 0));

    // Caso 5: diferencia en el medio
    a = "abcxef"; b = "abcdef";
    printf("Caso 5 (en medio): memcmp=%d | ft_memcmp=%d\n",
           memcmp(a, b, 6), ft_memcmp(a, b, 6));

    // Caso 6: bloques con '\0' dentro
    a = "abc\0def"; b = "abc\0xyz";
    printf("Caso 6 (con null interno): memcmp=%d | ft_memcmp=%d\n",
           memcmp(a, b, 7), ft_memcmp(a, b, 7));

    // Caso 7: comparación parcial (n más pequeño que la diferencia)
    a = "abcd"; b = "abcf";
    printf("Caso 7 (n=2, no llega a la dif): memcmp=%d | ft_memcmp=%d\n",
           memcmp(a, b, 2), ft_memcmp(a, b, 2));

    // Caso 8: enteros en memoria
    int x1 = 42, x2 = 42, x3 = 43;
    printf("Caso 8 (enteros iguales): memcmp=%d | ft_memcmp=%d\n",
           memcmp(&x1, &x2, sizeof(int)), ft_memcmp(&x1, &x2, sizeof(int)));
    printf("Caso 8b (enteros distintos): memcmp=%d | ft_memcmp=%d\n",
           memcmp(&x1, &x3, sizeof(int)), ft_memcmp(&x1, &x3, sizeof(int)));

    // Caso 9: arrays de bytes
    unsigned char arr1[] = {0x00, 0x7F, 0xFF};
    unsigned char arr2[] = {0x00, 0x7F, 0xFE};
    printf("Caso 9 (bytes): memcmp=%d | ft_memcmp=%d\n",
           memcmp(arr1, arr2, 3), ft_memcmp(arr1, arr2, 3));

    return 0;
}*/
