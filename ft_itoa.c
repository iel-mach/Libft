/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-mach <iel-mach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 23:25:22 by iel-mach          #+#    #+#             */
/*   Updated: 2021/11/13 02:40:13 by iel-mach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*pit_in_str(long int nb, int i, int j, long int nbr)
{
	char	*x;

	while (nb > 0)
	{
		nb = nb / 10;
		i++;
	}
	x = malloc((i + 1) * sizeof(char));
	if (!x)
		return (NULL);
	if (j)
		x[0] = '-';
	x[i] = '\0';
	i--;
	while (i >= 0 && nbr)
	{
		x[i--] = (nbr % 10) + 48;
		nbr = nbr / 10;
	}
	return (x);
}

char	*ft_itoa(int n)
{
	int			j;
	int			i;
	long int	nb;
	long int	nbr;

	i = 0;
	j = 0;
	nbr = n;
	if (n == 0)
		return (ft_strdup("0"));
	if (n < 0)
	{
		nbr *= (-1);
		j++;
		i++;
	}
	nb = nbr;
	return (pit_in_str(nb, i, j, nbr));
}
