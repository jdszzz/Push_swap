/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albelmon <albelmon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/01 16:21:38 by albelmon          #+#    #+#             */
/*   Updated: 2025/10/17 15:50:39 by albelmon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Copies 'n' bytes from memory area 'src' to memory area 'dest'.
 *        The memory areas may overlap; copying is done in a 
 * non-destructive manner.
 *
 * This function handles overlapping memory regions by 
 * determining the direction
 * of copying:
 * - If 'dest' is lower than 'src', copying is performed 
 * from the beginning.
 * - If 'dest' is higher than 'src', copying is performed from the end.
 *
 * @param dest Pointer to the destination memory area.
 * @param src Pointer to the source memory area.
 * @param n Number of bytes to copy.
 * @return Pointer to the destination memory area 'dest'.
 */
void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*ptrdest;
	unsigned char	*ptrsrc;

	ptrdest = (unsigned char *)dest;
	ptrsrc = (unsigned char *)src;
	if (dest < src)
	{
		i = -1;
		while (++i < n)
			ptrdest[i] = ptrsrc[i];
	}
	if (dest > src)
	{
		i = n;
		while (i--)
			ptrdest[i] = ptrsrc[i];
	}
	return (dest);
}

/* void print_buffers(const char *title, char *buf1, char *buf2, int size)
{
    printf("%s\n", title);
    printf("ft_memmove: %.*s\n", size, buf1);
    printf("memmove:   %.*s\n\n", size, buf2);
}

int main(void)
{
    char buf1[20], buf2[20];

    // Caso 1: Copia normal sin solapamiento
    strcpy(buf1, "ABCDEFGHIJ");
    strcpy(buf2, "ABCDEFGHIJ");
    ft_memmove(buf1 + 5, buf1, 3);
    memmove(buf2 + 5, buf2, 3);
    print_buffers("Caso 1 (sin solapamiento, dest > src):", buf1, buf2, 15);

    // Caso 2: Copia con solapamiento (dest dentro de src)
    strcpy(buf1, "ABCDEFGHIJ");
    strcpy(buf2, "ABCDEFGHIJ");
    ft_memmove(buf1 + 2, buf1, 5);
    memmove(buf2 + 2, buf2, 5);
    print_buffers("Caso 2 (con solapamiento, dest > src):", buf1, buf2, 15);

    // Caso 3: Copia con solapamiento al revés (src dentro de dest)
    strcpy(buf1, "ABCDEFGHIJ");
    strcpy(buf2, "ABCDEFGHIJ");
    ft_memmove(buf1, buf1 + 2, 5);
    memmove(buf2, buf2 + 2, 5);
    print_buffers("Caso 3 (con solapamiento, src > dest):", buf1, buf2, 15);

    // Caso 4: Copia con strings iguales
    strcpy(buf1, "ABCDEFGHIJ");
    strcpy(buf2, "ABCDEFGHIJ");
    ft_memmove(buf1, buf1, 5);
    memmove(buf2, buf2, 5);
    print_buffers("Caso 4 (src == dest):", buf1, buf2, 15);

    // Caso 5: Copia de memoria binaria (incluyendo '\0')
    strcpy(buf1, "1234567890");
    strcpy(buf2, "1234567890");
    ft_memmove(buf1 + 1, buf1, 6); // copia incluyendo '\0' del "123456"
    memmove(buf2 + 1, buf2, 6);
    print_buffers("Caso 5 (con bytes incluyendo \\0):", buf1, buf2, 15);

    return 0;
} */
