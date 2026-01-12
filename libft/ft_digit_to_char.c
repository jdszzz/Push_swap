/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_digit_to_char.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albelmon <albelmon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 16:26:50 by albelmon          #+#    #+#             */
/*   Updated: 2025/10/20 16:48:22 by albelmon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//Funcion que recibe un numero entero y lo devuelve como char.
char	ft_digit_to_char(int n)
{
	char	c;

	c = n + '0';
	return (c);
}
