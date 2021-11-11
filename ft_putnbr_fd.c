/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-mach <iel-mach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 17:10:55 by iel-mach          #+#    #+#             */
/*   Updated: 2021/11/10 17:30:11 by iel-mach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count(int nbr)
{
	int	j;

	j = 1;
	while (nbr > 9)
	{
		j = j * 10;
		nbr = nbr / 10;
	}
	return (j);
}

void	ft_putnbr_fd(int nb, int fd)
{
	int	i;

	if (nb == -2147483648)
		write (fd, "-2147483648", 11);
	else
	{
		if (nb < 0)
		{
			ft_putchar_fd('-', fd);
			nb *= -1;
		}
		i = count(nb);
		while (i > 9)
		{
			ft_putchar_fd (nb / i + '0', fd);
			nb = nb - ((nb / i) * i);
			i = i / 10;
		}
		ft_putchar_fd(nb + '0', fd);
	}
}
