/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-mach <iel-mach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 12:54:04 by iel-mach          #+#    #+#             */
/*   Updated: 2021/11/07 21:19:48 by iel-mach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	unsigned char	*s;
	int				sign;
	unsigned long	rus;

	s = (unsigned char *)str;
	sign = 1;
	rus = 0;
	while (*s == 32 || (*s >= 7 && *s <= 13))
		s++;
	if (*s == '-' || *s == '+')
	{
		if (*s == '-')
			sign *= (-1);
		s++;
	}
	while (*s >= '0' && *s <= '9')
	{
		rus = (rus * 10) + (*s - 48);
		if (rus > 9223372036854775807 && sign == -1)
			return (0);
		else if (rus > 9223372036854775807 && sign == 1)
			return (-1);
		s++;
	}
	return (sign * rus);
}
