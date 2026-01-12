/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albelmon <albelmon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 15:01:01 by albelmon          #+#    #+#             */
/*   Updated: 2025/10/17 15:51:20 by albelmon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//Elimina todos los carácteres pertenecientes a set desde el principio y 
//el final de s1 hasta encontrar un caracter que no sea de set
/**
 * @brief Trims the characters specified in 'set' from the beginning and
 *  end of the string 's1'.
 *
 * This function removes all characters in 'set' from the start and end
 *  of the input string 's1',
 * returning a newly allocated string containing the trimmed result. If 
 * 's1' or 'set' is NULL,
 * the function returns NULL. If the entire string is trimmed, an empty
 *  string is returned.
 *
 * @param s1 The input string to be trimmed.
 * @param set The set of characters to trim from both ends of 's1'.
 * @return A pointer to the newly allocated trimmed string, or NULL on
 *  allocation failure or invalid input.
 */
char	*ft_strtrim(char const *s1, char const *set)
{
	char	*cpy;
	int		start;
	int		end;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	end = ft_strlen(s1) - 1;
	while (ft_strchr(set, s1[start]) && start <= end)
		start++;
	if (start > end)
		return (ft_strdup(""));
	while (ft_strchr(set, s1[end]) && start <= end)
		end--;
	cpy = malloc(end - start + 2);
	if (!cpy)
		return (NULL);
	ft_strlcpy(cpy, s1 + start, end - start + 2);
	return (cpy);
}

/* int main(void)
{
    char *s1 = "xxvxholaxx";
    char *set = "xv";
	
    printf("%s\n", ft_strtrim(s1, set));
    return 0;
} */
