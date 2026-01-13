/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albelmon <albelmon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 10:10:57 by albelmon          #+#    #+#             */
/*   Updated: 2026/01/13 09:25:13 by albelmon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static const char	*ft_next_word(const char *s, char c)
{
	while (*s && *s != c)
		s++;
	if (*s)
		s++;
	return (s);
}

static char	**ft_split_clean(char **array, size_t len)
{
	if (!array)
		return (NULL);
	while (len)
		free(array[--len]);
	free(array);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char		**result;
	int			i;
	int			n_substrings;
	const char	*scpy;

	if (!s)
		return (NULL);
	scpy = s;
	i = 0;
	n_substrings = ft_count_words(s, c);
	result = malloc(sizeof(char *) * (n_substrings + 1));
	if (!result)
		return (NULL);
	while (i < n_substrings)
	{
		while (*scpy == c)
			scpy++;
		result[i] = ft_get_substr(scpy, c);
		if (!result[i])
			return (ft_split_clean(result, i));
		scpy = ft_next_word(scpy, c);
		i++;
	}
	result[i] = NULL;
	return (result);
}

/* int main(void)
{
    char    *s = "aaaaaapaaapaaaaaaaa";
    char    c = 'a';
    char    **result;
    int     i;

    result = ft_split(s, c);
    if (!result)
    {
        printf("Error: ft_split devolvió NULL\n");
        return (1);
    }

    i = 0;
    while (result[i])
    {
        printf("result[%d] = \"%s\"\n", i, result[i]);
        i++;
    }
    printf("result[%d] = NULL\n", i);

    // 🔥 Importante: liberar la memoria
    i = 0;
    while (result[i])
    {
        free(result[i]);
        i++;
    }
    free(result);

    return (0);
} */
