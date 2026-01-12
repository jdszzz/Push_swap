/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albelmon <albelmon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 10:10:57 by albelmon          #+#    #+#             */
/*   Updated: 2025/10/20 17:06:19 by albelmon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//Funcion que devuelve un puntero al proximo caracter de s tras encontrar c
/**
 * Advances the pointer `s` to the next occurrence 
 * of the character `c` or the end of the string.
 * If `c` is found, the pointer is incremented past `c`.
 *
 * @param s The input string to search through.
 * @param c The delimiter character to search for.
 * @return A pointer to the character immediately after 
 * the first occurrence of `c`,
 *         or to the null terminator if `c` is not found.
 */
static const char	*ft_next_word(const char *s, char c)
{
	while (*s && *s != c)
		s++;
	if (*s)
		s++;
	return (s);
}

/**
 * @brief Frees a dynamically allocated array of strings and its contents.
 *
 * This function takes a pointer to an array of strings and its length,
 * frees each individual string in the array, then frees the array itself.
 * Returns NULL to indicate the array has been cleaned up.
 *
 * @param array Pointer to the array of strings to be freed.
 * @param len Number of strings in the array.
 * @return Always returns NULL.
 */
static char	**ft_split_clean(char **array, size_t len)
{
	if (!array)
		return (NULL);
	while (len)
		free(array[--len]);
	free(array);
	return (NULL);
}

/**
 * Splits a string into an array of substrings based on a delimiter character.
 *
 * @param s The input string to split.
 * @param c The delimiter character used to split the string.
 * @return An array of strings (substrings), terminated by a NULL pointer.
 *         Returns NULL if memory allocation fails or if the input string 
 * is NULL.
 *
 * The function counts the number of substrings separated by the delimiter,
 * allocates memory for the result array, and fills it with newly allocated
 * substrings. If any allocation fails, it frees all previously allocated memory.
 *
 * Helper functions used:
 * - ft_count_substrings: Counts the number of substrings in the input string.
 * - ft_newstrchr: Allocates and returns a substring up to the next delimiter.
 * - ft_newpointer: Advances the pointer to the start of the next substring.
 * - ft_split_clean: Frees allocated memory in case of failure.
 */
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
