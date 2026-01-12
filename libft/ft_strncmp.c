/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albelmon <albelmon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/01 12:48:00 by albelmon          #+#    #+#             */
/*   Updated: 2025/10/17 15:43:52 by albelmon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**
 * @brief Compares up to n characters of two strings.
 *
 * This function compares the first n characters of the strings s1 and s2.
 * The comparison is done using unsigned characters. The function returns
 * an integer less than, equal to, or greater than zero if s1 is found,
 * respectively, to be less than, to match, or be greater than s2.
 *
 * @param s1 Pointer to the first string to compare.
 * @param s2 Pointer to the second string to compare.
 * @param n Maximum number of characters to compare.
 * @return An integer indicating the result of the comparison:
 *         - 0 if the strings are equal up to n characters,
 *         - A positive value if s1 is greater than s2,
 *         - A negative value if s1 is less than s2.
 */
int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] && s2[i] && i < n && s1[i] == s2[i])
		i++;
	if (i == n)
		return (0);
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

/*int	main(void)
{
	printf("%d\n", ft_strncmp("holi", "hola", 4));
	return (0);
}*/
