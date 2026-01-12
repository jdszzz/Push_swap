/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albelmon <albelmon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 10:56:07 by albelmon          #+#    #+#             */
/*   Updated: 2025/10/17 15:38:54 by albelmon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Writes the integer 'n' to the given file descriptor 'fd'.
 *
 * This function handles negative numbers, including the minimum value
 * of a 32-bit signed integer (-2147483648), and writes the number as
 * a sequence of characters to the specified file descriptor.
 *
 * @param n  The integer to write.
 * @param fd The file descriptor to write to.
 */
void	ft_putnbr_fd(int n, int fd)
{
	char	t;

	if (n == -2147483648)
		write(fd, "-2147483648", 11);
	else
	{
		if (n < 0)
		{
			write(fd, "-", 1);
			n = -n;
		}
		if (n >= 10)
			ft_putnbr_fd(n / 10, fd);
		t = n % 10 + '0';
		write(fd, &t, 1);
	}
}

/*int	main(void)
{
	ft_putnbr_fd(9, 1);
	return (0);
}*/
