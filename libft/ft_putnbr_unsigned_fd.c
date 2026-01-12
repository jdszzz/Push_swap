/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_unsigned_fd.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albelmon <albelmon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 09:31:16 by albelmon          #+#    #+#             */
/*   Updated: 2025/10/27 10:38:03 by albelmon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_unsigned_fd(unsigned int nbr, int fd)
{
	char	n;

	if (nbr >= 10)
		ft_putnbr_unsigned_fd(nbr / 10, fd);
	n = nbr % 10 + '0';
	write (fd, &n, 1);
}

/* int	main(void)
{
	ft_putnbr_unsigned_fd(4294967295, 1);
	write(1, "\n", 1);
	return (0);
	//4294967295
} */
